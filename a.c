#include <comelang2.h>

void fun(char* a)
{
    puts(a);
}

int main(int argc, char** argv) 
{
    var b = [1,2,3];
    fun(b);
    
    return 0;
}
