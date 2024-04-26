#include <comelang2.h>

int fun(bool block=false, int a=1)
{
    puts("AAA");
    return 1;
}

int main(int argc, char** argv)
{
    fun(block:true);
    
    return 0;
}
