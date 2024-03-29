#include <comelang2.h>

struct sData
{
    int a;
    int b;
};

void sData*::fun(sData* self)
{
    printf("%d %d\n", self.a, self.b);
}

int main(int argc, char** argv)
{
    sData* a = null;
    
    a.fun();
    
    return 0;
}

