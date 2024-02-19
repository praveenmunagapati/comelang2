#include <comelang2.h>
#include <comelang2-str.h>

int main(int argc, char** argv) 
{
    int* a = gc_inc(new int);
    
    delete a;
    
    int* b = gc_inc(new int);
    delete b;
    
    int* c = gc_inc(new int);
    
    return 0;
}
