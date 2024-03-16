#include <comelang2.h>
#include <comelang2-str.h>

#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <glob.h>
#include <locale.h>
#include <unistd.h>
#include <limits.h>

bool gSigInt = false;

struct sCommand
{
    list<string>*% args;
    
    bool mix_stdout;
    tuple2<string,bool>*% redirect_stdout;
    tuple2<string,bool>*% redirect_stderr;
};

sCommand*% sCommand*::initialize(sCommand*% self)
{
    self.args = new list<string>();
    
    self.mix_stdout = false;
    self.redirect_stdout = null;
    self.redirect_stderr = null;
    
    return self;
}

struct sInfo
{
    char* p;
    int rcode;
    
    list<sCommand*%>*% commands;
};

void skip_spaces(sInfo* info)
{
    while(*info->p == ' ' || *info->p == '\t') info->p++;
}

string parse_word(sInfo* info);

void parse_redirect(sInfo* info)
{
    while(true) {
        if(*info->p == '>' && *(info->p+1) == '>') {
            info->p += 2;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            info.commands[-1].redirect_stdout = (file_name, true);
        }
        else if(*info->p == '>') {
            info->p ++;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            info.commands[-1].redirect_stdout = (file_name, false);
        }
        else if(memcmp(info->p, "2>&1", 4) == 0) {
            info->p += 4;
            skip_spaces(info);
            info.commands[-1].mix_stdout = true;
        }
        else if(*info->p == '2' && *(info->p+1) == '>' && *(info->p+2) == '>') {
            info->p += 3;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            info.commands[-1].redirect_stderr = (file_name, true);
        }
        else if(*info->p == '2' && *(info->p+1) == '>') {
            info->p += 2;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            info.commands[-1].redirect_stderr = (file_name, false);
        }
        else if(*info->p == '1' && *(info->p+1) == '>' && *(info->p+2) == '>') {
            info->p += 3;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            info.commands[-1].redirect_stdout = (file_name, true);
        }
        else if(*info->p == '1' && *(info->p+1) == '>') {
            info->p += 2;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            info.commands[-1].redirect_stdout = (file_name, false);
        }
        else {
            break;
        }
    }
}

static bool expand_glob(char* str, list<string>* result, sInfo* info)
{
    glob_t glob_result;
    int rc = glob(str, 0, NULL, &glob_result);

    if(rc == GLOB_NOSPACE) {
        printf("out of space during glob operation\n");
        return false;
    }
    else if(rc == GLOB_NOMATCH) {
        result.push_back(string(str));
    }
    else {
        if(glob_result.gl_pathc > 0) {
            int i;
            for(i=0; i<glob_result.gl_pathc; i++) {
                result.push_back(string(glob_result.gl_pathv[i]));
            }
        }
        else {
            result.push_back(string(str));
        }
    }

    globfree(&glob_result);

    return true;
}

string parse_word(sInfo* info) 
{
    buffer*% result = new buffer();
    
    parse_redirect(info);
    
    skip_spaces(info);
    
    parse_redirect(info);
    
    bool squort = false;
    bool dquort = false;
    
    if(*info->p == '~') {
        info->p++;
        
        result.append_str(getenv("HOME"));
    }
    
    while(true) {
        if(!squort && *info->p == '"') {
            info->p++;
            dquort = !dquort;
        }
        else if(!dquort && *info->p == '\'') {
            info->p++;
            squort = !squort;
        }
        else if(!squort && *info->p == '$') {
            info->p++;
            
            var buf2 = new buffer();
            while(xisalpha(*info->p)) {
                buf2.append_char(*info->p);
                info->p++;
            }
            
            result.append_str(getenv(buf2.to_string()));
        }
        else if(squort || dquort) {
            result.append_char(*info->p);
            info->p++;
        }
        else if(*info->p == '\\') {
            info->p++;
            
            if(*info->p == '\0') {
                break;
            }
            else {
                result.append_char(*info->p);
                info->p++;
            }
        }
        else if(*info->p == ' ' ||  *info->p == '\t' || *info->p == '\n' 
                || *info->p == '\0' || *info->p == ';' || *info->p == '&' 
                || *info->p == '|' || *info->p == '>' || (strlen(info->p) >= strlen("2>&1") && memcmp(info->p, "2>&1", strlen("2>&1")) == 0)) 
        {
            break;
        }
        else {
            result.append_char(*info->p);
            info->p++;
        }
    }
    
    skip_spaces(info);
    
    parse_redirect(info);
    
    skip_spaces(info);
    
    parse_redirect(info);
    
    return result.to_string();
}

int parse_cmp(char* str, char* str2)
{
    int len = strlen(str2);
    
    char* p = str;
    
    int i;
    for(i=0; i<len; i++) {
        if(*(str + i) == '\0') {
            break;
        }
        else {
            p++;
        }
    }
    
    if(i < len) {
        return -1;
    }
    else {
        return memcmp(str, str2, len);
    }
}

int, bool run(char* source);

bool parse_statment(sInfo* info)
{
    info->commands.add(new sCommand());
    
    while(true) {
        bool zed_command = false;
        bool sub_shell = false;
        if(*info->p == '!') {
            info->p++;
            zed_command = true;
        }
        else if(*info->p == '.' && xisalpha(*(info->p+1))) {
            zed_command = true;
        }
        
        if(*info->p == '(') {
            info->p++;
            sub_shell = true;
        }
        
        buffer*% buf = new buffer();
        char* p = info->p;
        while(*info->p != '\n' && *info->p != '\0' && *info->p != ';' && *info->p != ')') {
            buf.append_char(*info->p);
            info->p++;
        }
        string line = buf.to_string();
        
        if(zed_command) {
            info->p = p;
            
            buffer*% arg = new buffer();
            while(*info->p) {
                if(*info->p == '|' && *(info->p+1) != '|') {
                    break;
                }
                else {
                    arg.append_char(*info->p);
                    info->p++;
                }
            }
            
            if(arg.to_string() === "") {
                break;
            }
            
            info->commands[-1].args.push_back(string("zed"));
            info->commands[-1].args.push_back(arg.to_string());
        }
        else if(sub_shell) {
            info->p = p;
            
            buffer*% arg = new buffer();
            while(*info->p) {
                if(*info->p == ')') {
                    info->p++;
                    break;
                }
                else {
                    arg.append_char(*info->p);
                    info->p++;
                }
            }
            
            if(arg.to_string() === "") {
                break;
            }
            
            info->commands[-1].args.push_back(string("bash"));
            info->commands[-1].args.push_back(string("-c"));
            info->commands[-1].args.push_back(arg.to_string());
        }
        else if(line.match(/^cd\s*$/)) {
            char* path = getenv("HOME");
            chdir(path);
            
            setenv("PWD", path, 1);
        }
        else if(line.match(/^cd /)) {
            var str = clone line.scan(/^cd +(.+)/)[1];
            
            if(str) {
                char path[PATH_MAX];
                realpath(str, path);
                chdir(path);
                
                setenv("PWD", path, 1);
            }
        }
        else if(line.match(/^if /)) {
            info->p = p;
            
            info->p += 2;
            skip_spaces(info);
            
            char* head = info->p;
            char* tail = null;
            
            while(*info->p) {
                if(parse_cmp(info->p, "then") == 0) {
                    tail = info->p -1;
                    break;
                }
                else {
                    info->p++;
                }
            }
            
            info->p += 4;
            
            if(tail == null) {
                puts("if statment error");
                return false;
            }
            
            buffer*% source = new buffer();
            
            source.append(head, tail - head);
            
            var rcode, err = run(source.to_string());
            
            if(err) {
                puts("if statment error");
                return false;
            }
            
            if(rcode == 0) {
                char* head = info->p;
                char* tail = null;
                
                while(*info->p) {
                    if(parse_cmp(info->p, "fi") == 0) {
                        tail = info->p -1;
                        info->p += 2;
                        break;
                    }
                    else if(parse_cmp(info->p, "else") == 0) {
                        tail = info->p -1;
                        break;
                    }
                    else if(parse_cmp(info->p, "elif") == 0) {
                        tail = info->p -1;
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                
                if(tail == null) {
                    puts("if statment error");
                    return false;
                }
                
                buffer*% source = new buffer();
                
                source.append(head, tail - head);
            
                var rcode, err = run(source.to_string());
                
                if(err) {
                    puts("if statment error");
                    return false;
                }
            }
            else {
                char* head = info->p;
                char* tail = null;
                
                while(*info->p) {
                    if(parse_cmp(info->p, "fi") == 0) {
                        tail = info->p -1;
                        info->p += 2;
                        break;
                    }
                    else if(parse_cmp(info->p, "else") == 0) {
                        tail = info->p -1;
                        break;
                    }
                    else if(parse_cmp(info->p, "elif") == 0) {
                        tail = info->p -1;
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                
                if(tail == null) {
                    puts("if statment error");
                    return false;
                }
            }
            
            while(true) {
                if(parse_cmp(info->p, "else") == 0) {
                    info->p += 4;
                    
                    char* head = info->p;
                    char* tail = null;
                    
                    while(*info->p) {
                        if(parse_cmp(info->p, "fi") == 0) {
                            tail = info->p -1;
                            info->p += 2;
                            break;
                        }
                        else {
                            info->p++;
                        }
                    }
                    
                    if(tail == null) {
                        puts("if statment error");
                        return false;
                    }
                    
                    if(rcode != 0) {
                        buffer*% source = new buffer();
                        
                        source.append(head, tail - head);
                    
                        var rcode2, err = run(source.to_string());
                        
                        if(err) {
                            puts("if statment error");
                            return false;
                        }
                        
                        rcode = rcode2;
                    }
                }
                else if(parse_cmp(info->p, "elif") == 0) {
                    info->p += 4;
                    skip_spaces(info);
                    
                    char* head = info->p;
                    char* tail = null;
                    
                    while(*info->p) {
                        if(parse_cmp(info->p, "then") == 0) {
                            tail = info->p -1;
                            break;
                        }
                        else {
                            info->p++;
                        }
                    }
                    
                    info->p += 4;
                    
                    if(tail == null) {
                        puts("if statment error");
                        return false;
                    }
                    
                    buffer*% source = new buffer();
                    
                    source.append(head, tail - head);
                    
                    var rcode2, err = run(source.to_string());
                    
                    if(err) {
                        puts("if statment error");
                        return false;
                    }
                    
                    if(rcode2 == 0) {
                        char* head = info->p;
                        char* tail = null;
                        
                        while(*info->p) {
                            if(parse_cmp(info->p, "fi") == 0) {
                                tail = info->p -1;
                                info->p += 2;
                                break;
                            }
                            else if(parse_cmp(info->p, "else") == 0) {
                                tail = info->p -1;
                                break;
                            }
                            else if(parse_cmp(info->p, "elif") == 0) {
                                tail = info->p -1;
                                break;
                            }
                            else {
                                info->p++;
                            }
                        }
                        
                        if(tail == null) {
                            puts("if statment error");
                            return false;
                        }
                        
                        buffer*% source = new buffer();
                        
                        source.append(head, tail - head);
                    
                        var rcode3, err = run(source.to_string());
                        
                        if(err) {
                            puts("if statment error");
                            return false;
                        }
                    }
                    else {
                        char* head = info->p;
                        char* tail = null;
                        
                        while(*info->p) {
                            if(parse_cmp(info->p, "fi") == 0) {
                                tail = info->p -1;
                                info->p += 2;
                                break;
                            }
                            else if(parse_cmp(info->p, "else") == 0) {
                                tail = info->p -1;
                                break;
                            }
                            else if(parse_cmp(info->p, "elif") == 0) {
                                tail = info->p -1;
                                break;
                            }
                            else {
                                info->p++;
                            }
                        }
                        
                        if(tail == null) {
                            puts("if statment error");
                            return false;
                        }
                    }
                    
                    rcode = rcode2;
                }
                else {
                    break;
                }
            }
        }
        else if(line.match(/^while /)) {
            info->p = p;
            
            info->p += strlen("while");
            skip_spaces(info);
            
            char* head = info->p;
            char* tail = null;
            
            while(*info->p) {
                if(parse_cmp(info->p, "do") == 0) {
                    tail = info->p -1;
                    break;
                }
                else {
                    info->p++;
                }
            }
            
            info->p += strlen("do");
            
            if(tail == null) {
                puts("while statment error");
                return false;
            }
            
            buffer*% source = new buffer();
            
            source.append(head, tail - head);
            
            buffer*% source2 = new buffer();
            
            {
                char* head = info->p;
                char* tail = null;
                
                while(*info->p) {
                    if(parse_cmp(info->p, "done") == 0) {
                        tail = info->p -1;
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                
                info->p += strlen("done");
                
                if(tail == null) {
                    puts("while statment error");
                    return false;
                }
                
                source2.append(head, tail - head);
            }
            
            while(1) {
                var rcode, err = run(source.to_string());
                
                if(err) {
                    puts("while statment error");
                    return false;
                }
                
                if(gSigInt) {
                    gSigInt = false;
                    break;
                }
                
            
                if(rcode == 0) {
                    var rcode, err = run(source2.to_string());
                    
                    if(err) {
                        puts("while statment error");
                        return false;
                    }
                }
                else {
                    break;
                }
            }
        }
        else if(line.match(/^cd /)) {
            var str = line.scan(/^cd +(.+)/).item(1, null);
            
            if(str) {
                char path[PATH_MAX];
                realpath(str, path);
                chdir(path);
                
                setenv("PWD", path, 1);
            }
        }
        else if(line.match(/^export /)) {
            var li = line.scan(/^export +(.+)=(.+)/);
            
            var name = li.item(1, null);
            var value = li.item(2, null);
            
            if(name && value) {
                setenv(name, value, 1);
            }
        }
        else {
            info->p = p;
            
            string arg = parse_word(info);
            
            if(arg === "") {
                break;
            }
            
            list<string>*% words = new list<string>();
            if(!expand_glob(arg, words, info)) {
                return false;
            }
            
            foreach(it, words) {
                info->commands[-1].args.push_back(string(it));
            }
        }
    }
}

bool redirect(int n, sInfo* info)
{
    tuple2<string,bool>*% redirect_stdout = dummy_heap info->commands[n].redirect_stdout;
    tuple2<string,bool>*% redirect_stderr = dummy_heap info->commands[n].redirect_stderr;
    
    if(redirect_stdout) {
        string file_name = redirect_stdout.v1;
        bool append = redirect_stdout.v2;
        
        int fd;
        if(append) {
            fd = open(file_name, O_APPEND|O_WRONLY|O_CREAT, 0644);
        }
        else {
            fd = open(file_name, O_WRONLY|O_CREAT|O_TRUNC, 0644);
        }
        
        if(fd < 0) {
            return false;
        }
        
        dup2(fd, 1);
        close(fd);
    }
    
    if(redirect_stderr) {
        string file_name = redirect_stderr.v1;
        bool append = redirect_stderr.v2;
        
        int fd;
        if(append) {
            fd = open(file_name, O_APPEND|O_WRONLY|O_CREAT, 0644);
        }
        else {
            fd = open(file_name, O_WRONLY|O_CREAT|O_TRUNC, 0644);
        }
        
        if(fd < 0) {
            return false;
        }
        
        dup2(fd, 2);
        close(fd);
    }
    
    return true;
}

bool run_command(int n, sInfo* info)
{
    int pipes[2];
    
    memset(pipes, 0, sizeof(int)*2);
    
    if(n == info->commands.length()-1) {
        if(!redirect(0, info)) {
            return false;
        }
        
        bool mix_stdout = info->commands[0].mix_stdout;
        
        if(mix_stdout) {
            dup2(1, 2);
        }
        
        list<string>* args = info->commands[0].args;
        
        char* argv[1024];
        int i;
        for(i=0; i<args.length(); i++) {
            argv[i] = args[i];
        }
        argv[i] = NULL;
        
        execvp(argv[0], argv);
        exit(127);
    }
    else {
        pipe(pipes);
        
        pid_t pid = fork();
        
        if(pid == 0) {
            bool mix_stdout = info->commands[info->commands.length()-n-1];
            
            if(mix_stdout) {
                dup2(1, 2);
            }
            
            if(!redirect(info->commands.length()-n-1, info)) {
                return false;
            }
            
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);
            
            run_command(n+1, info);
        }
        else {
            close(pipes[1]);
            dup2(pipes[0], 0);
            close(pipes[0]);
            
            if(!redirect(info->commands.length()-n-1, info)) {
                return false;
            }
            
            list<string>* args = info->commands[info->commands.length()-n-1].args;
            char* argv[1024];
            int i;
            for(i=0; i<args.length(); i++) {
                argv[i] = args[i];
            }
            argv[i] = NULL;
            
            execvp(argv[0], argv);
            exit(127);
        }
    }
    
    return true;
}

int, bool run(char* source)
{
    sInfo info;
    
    info.commands = new list<sCommand*%>();
    info.p = source;
    
    while(*info->p) {
        while(*info->p == '\n' || *info->p == ';') info->p++;
        
        while(true) {
            parse_statment(&info);
            
            if(info->commands[-1].args.length() == 0) {
                break;
            }
            
            if(*info->p == '|' && *(info->p+1) != '|') {
                info->p++;
                skip_spaces(&info);
            }
            else {
                break;
            }
        }
        
        if(info->commands.length() == 0) {
            break;
        }
    
        pid_t pid = fork();
        
        if(pid == 0) {
            run_command(0, &info);
        }
        else {
            int status = 0;
            int options = WUNTRACED;
            pid_t pid2 = waitpid(pid, &status, options);
            if(pid2 < 0) {
                if(gSigInt) {
                }
                else {
                    perror("waitpid");
                    exit(1);
                }
            }
            
            tcsetpgrp(0, getpgrp()) or die("tcsetpgrp");
            
            info.rcode = WEXITSTATUS(status);
            
            if(info.rcode == 127) {
                fprintf(stderr, "command not found (%s)\n", info->commands[-1].args[0]);
            }
            
            setenv("?", xsprintf("%d", info.rcode), 1);
        }
        
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            if(info->rcode == 0) {
                break;
            }
        }
        else if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            if(info->rcode != 0) {
                break;
            }
        }
        
        while(*info->p == '\n' || *info->p == ';') info->p++;
    }
    
    return (info->rcode, false);
}

void sigchld_action(int signum, siginfo_t* info, void* ctx)
{
}

void sig_tstp(int signum)
{
}

void sig_int(int signal)
{
    gSigInt = true;
    rl_reset_line_state();
    rl_replace_line("", 0);
    rl_point = 0;
    puts("");
    rl_redisplay();
}

void sigchld_block(int block)
{
    sigset_t sigset;

    sigemptyset(&sigset);
    sigaddset(&sigset, SIGCHLD);

    if(sigprocmask((block?SIG_BLOCK:SIG_UNBLOCK), &sigset, NULL) != 0)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
}

void sig_int_optc(int signum)
{
    sigchld_block(1);
    gSigInt = true;
    sigchld_block(0);
}

void sig_tstp_optc(int signum, siginfo_t* info, void* ctx)
{
    sigchld_block(1);
    killpg(0, SIGSTOP);
    sigchld_block(0);
}

void sig_cont_optc(int signum, siginfo_t* info, void* ctx)
{
    sigchld_block(1);
    //mrestore_ttysettings();
    sigchld_block(0);
}

void set_signal()
{
    struct sigaction sa;
    
    memset(&sa, 0, sizeof(sa));
    
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_RESTART|SA_SIGINFO;
    sigaction(SIGCHLD, &sa, NULL) or die("sigaction1");

    memset(&sa, 0, sizeof(sa));
    sigaction(SIGCONT, &sa, NULL) or die("sigaction3");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    sigaction(SIGWINCH, &sa, NULL) or die("sigaction4");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTOU, &sa, NULL) or die("sigaction5");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTIN, &sa, NULL) or die("sigaction6");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = sig_tstp;
    sa.sa_flags = 0;
    sigaction(SIGTSTP, &sa, NULL) or die("sigaction7");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGQUIT, &sa, NULL) or die("sigaction8");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGPIPE, &sa, NULL) or die("sigaction10");

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = (sig_t)sig_int;
    sigaction(SIGINT, &sa, null) or die("sigaction2");
}

void set_signal_optc()
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_SIGINFO|SA_RESTART;
    sigaction(SIGCHLD, &sa, NULL) or die("siagaction1");

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = sig_int_optc;
    sigaction(SIGINT, &sa, NULL) or die("sigaction2");

    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sig_tstp_optc;
    sa.sa_flags = SA_RESTART;
    sigaction(SIGTSTP, &sa, NULL) or die("sigaction7");

    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sig_cont_optc;
    sa.sa_flags = SA_RESTART;
    sigaction(SIGCONT, &sa, NULL) or die("sigaction3");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    sigaction(SIGWINCH, &sa, NULL) or die("sigaction4");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTOU, &sa, NULL) or die("sigaction5");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTIN, &sa, NULL) or die("sigaction6");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGQUIT, &sa, NULL) or die("sigaction8");

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGPIPE, &sa, NULL) or die("sigaction10");
}

string line_buffer_from_head_to_cursor_point()
{
    string result = new char[strlen(rl_line_buffer)+1];
    memcpy(result, rl_line_buffer, rl_point);
    result[rl_point] = 0;

    return result;
}

int gMatchIndex;
list<string>*% gMatches;
bool gCommand;
string gInputingText;

void get_command_completion_cadidates()
{
    char* env = getenv("PATH");
    char path[PATH_MAX];
    char path2[PATH_MAX];
    struct stat stat_;

    char* p = path;
    int len = strlen(env);

    int i;
    for(i=0; i<len; i++) {
        if(env[i] == ':') {
            *p = '\0';

            if(access(path, F_OK) == 0) {
                if(stat(path, &stat_) == 0 && S_ISDIR(stat_.st_mode)) {
                    DIR* dir = opendir(path);

                    if(dir) {
                        while(1) {
                            struct dirent* entry = readdir(dir);

                            if(entry == NULL) {
                                break;
                            }

                            if(strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) 
                            {
                                strncpy(path2, path, PATH_MAX);

                                if(path[strlen(path)-1] != '/') {
                                    strncat(path2, "/", PATH_MAX);
                                }
                                strncat(path2, entry->d_name, PATH_MAX);

                                if(stat(path2, &stat_) == 0) {
                                    if(stat_.st_mode & S_IXUSR) 
                                    {
                                        if(memcmp(entry->d_name, gInputingText, strlen(gInputingText)) == 0) 
                                        {
                                            gMatches.push_back(string(entry->d_name));
                                        }
                                    }
                                }
                            }
                        }

                        closedir(dir);
                    }
                }
            }

            p = path;
        }
        else {
            *p = env[i];
            p++;

            if(p - (char*)path >= PATH_MAX) {
                break;
            }
        }
    }
}

char* completion_generator(const char* text, int state)
{
    if(state == 0) {
        gMatches = new list<string>();
        gMatchIndex = 0;
        get_command_completion_cadidates();
    }

    rl_completion_append_character = ' ';
    
    if(gMatchIndex < gMatches.length()) {
        return strdup(gMatches[gMatchIndex++]);
    }
    else {
        return NULL;
    }
    
    return NULL;
}

char** completer(const char* text, int start, int end)
{
    gCommand = true;
    
    string current_line = line_buffer_from_head_to_cursor_point();

    char* p = current_line;
    
    auto buf = new buffer();
    
    while(*p) {
        while(*p == ' ') {
            gCommand = true;
            p++;
        }
        
        while(xisascii(*p) && *p != ' ') {
            gCommand = true;
            buf.append_char(*p);
            p++;
        }
        
        while(*p == ' ') {
            gCommand = false;
            p++;
        }
        
        while(*p) {
            while(xisascii(*p) && *p != ' ') {
                gCommand = false;
                p++;
            }
            
            while(*p == ' ') {
                gCommand = false;
                p++;
            }
            
            if(*p == '|') {
                gCommand = true;
                
                buf = new buffer();
                p++;
                break;
            }
        }
    }
    
    gInputingText = buf.to_string();

    if(!gCommand) {
        rl_attempted_completion_over = 0;
        rl_completion_append_character = ' ';
        rl_completer_word_break_characters = " ";

        return null;
    }
    else {
        rl_attempted_completion_over = 1;
        rl_completer_word_break_characters = " ";

        return rl_completion_matches(text, completion_generator);
    }
    
    return null;
}

char* gCmdlineInitString = "";
int gCmdlineInitCursorPoint = 0;

void readline_insert_text(char* cmdline, int cursor_point)
{
    rl_replace_line(cmdline, 0);
    int n = cursor_point;

    if(n < 0) { n += strlen(rl_line_buffer) + 1; }
    if(n < 0) { n = 0; }
    if(n > strlen(rl_line_buffer)) { n = strlen(rl_line_buffer); }
    rl_point = n;
}

int readline_init_text()
{
    readline_insert_text(gCmdlineInitString, gCmdlineInitCursorPoint);
    
    gCmdlineInitString = "";
    gCmdlineInitCursorPoint = 0;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    
    bool command = false;
    string file_name = null;
    bool run_once = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-c") {
            command = true;
        }
        else if(i+1 < argc && argv[i] === "-i") {
            gCmdlineInitString = argv[i+1];
            gCmdlineInitCursorPoint = -1;
            i++;
        }
        else if(argv[i] === "-o") {
            run_once = true;
        }
        else if(i+1 < argc && argv[i] === "-n") {
            gCmdlineInitCursorPoint = atoi(argv[i+1]);
            i++;
        }
        else {
            file_name = string(argv[i]);
        }
    }
    
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    setenv("PWD", cwd, 1);
    
    FILE* f = fopen(getenv("HOME") + "/.shshrc", "r");
    
    if(f) {
        string command_str = f.read();
        
        var rcode, err = run(command_str);
        
        if(err) {
            fprintf(stderr, "error\n");
            exit(1);
        }
        
        fclose(f);
    }
    
    if(file_name == null) {
        set_signal();
        
        rl_completer_quote_characters = "\"'";
        rl_completer_word_break_characters = " \t.>";
        rl_attempted_completion_function = completer;
        
        rl_startup_hook = readline_init_text;
        
        while(true) {
            gSigInt = false;
            
            char* line;
            if(getenv("?")) {
                line = readline(getenv("PWD") + " " + getenv("?") + " > ");
            }
            else {
                line = readline(getenv("PWD") + " 0 > ");
            }
            
            if(line == null || line === "exit") {
                break;
            }
            
            var rcode, err = run(line);
            
            if(err) {
                fprintf(stderr, "error\n");
                exit(1);
            }
            
            add_history(line);
            
            free(line);
            
            if(run_once) {
                break;
            }
        }
    }
    else {
        string? command_str = null;
        if(command) {
            command_str = file_name;
        }
        else {
            command_str = string(file_name).read();
        }
        
        set_signal_optc();
        
        var rcode, err = run(command_str);
        
        if(err) {
            fprintf(stderr, "error\n");
            exit(1);
        }
    }
    
    return 0;
}
