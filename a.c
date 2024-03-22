#include <comelang2.h>

interface IA
{
    bool show();
};

struct sData
{
    int a;
    int b;
};

impl sData
{
    bool show(sData* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

IA*%,bool fun()
{
    return (new sData implements IA, true);
}


int main(int argc, char** argv)
{
    var ia, err = fun();
    
    ia.show();
    
    return 0;
}

