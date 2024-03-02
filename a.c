#include <comelang2.h>

int main(int argc, char** argv) 
{
    int* a = gc_inc(new int);
    
printf("a %p\n", a);
    
    return 0;
}
