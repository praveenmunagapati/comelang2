#include <comelang2.h>

int main(int argc, char** argv) 
{
    char* a = 1;

//    var a = [s"ABC", 1];
    puts(dynamic_typeof(a));
    
    return 0;
}
