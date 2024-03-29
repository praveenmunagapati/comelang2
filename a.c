#include <comelang2.h>

int fun()
{
    int a[3] = { 1, 2, 3};
    
    a[5] = 4;
    
    printf("%d\n", a[2]);
    
    return 0;
}

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}

