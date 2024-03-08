#include <comelang2.h>

int main(int argc, char** argv) 
{
    var a = [s"ABC", s"DEF"];
    puts(dynamic_typeof(a));
    
    return 0;
}
