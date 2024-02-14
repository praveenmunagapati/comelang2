#include <comelang2.h>
#include <comelang2-str.h>

int main(int argc, char** argv) 
{
    var li = s"AAA,BBB,CCC".split(/,/);
    
    li.each {
        puts(it);
    }
    
    return 0;
}
