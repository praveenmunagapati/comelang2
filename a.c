#include <comelang2.h>
#include <comelang2-str.h>

int main(int argc, char** argv) 
{
    var a = new int;
    
    *a = 123;
    
    printf("%d\n", *a);
    
    return 0;
}
