#include <comelang2.h>

int main(int argc, char** argv)
{
    int a[3] = { 1, 2, 3 };
    
    var p = a.to_pointer();
    
    printf("%d\n", *p);
    
    p++;
    
    printf("%d\n", *p);
    
    return 0;
}

