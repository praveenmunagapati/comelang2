#include <comelang2.h>

void fun(int|char n)
{
    printf("%d\n", n);
}

int main(int argc, char** argv) 
{
    int a = 1;
    
    fun(a);
    
    return 0;
}
