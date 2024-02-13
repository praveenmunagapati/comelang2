#include <comelang2.h>
#include <comelang2-str.h>

int main(int argc, char** argv) 
{
    var str = s"AAA,BBB,CCC".scan(/[a-zA-Z]+/).item(0,null);
    
    puts(str);
    
    return 0;
}
