#include <comelang2.h>

void fun()
{
    var a = gc_inc(new int);
    
    *a = 123;
    
    stackframe();
    
    printf("%d\n", *a);
}

int main(int argc, char** argv) 
{
    fun();
    
    return 0;
}
