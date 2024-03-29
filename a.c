#include <comelang2.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    sData* a = null;
    
    printf("%d\n", a->a);
    
    return 0;
}

