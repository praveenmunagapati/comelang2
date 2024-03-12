#include <comelang2.h>

struct sData
{
    int a;
    int b;
};

void fun(sData*%|char*% x)
{
    if(dynamic_typeof(x) === "sData") {
        sData* y = x;
        printf("%d %d\n", y.a, y.b);
    }
    else if(dynamic_typeof(x) === "char") {
        puts(x);
    }
}

int main()
{
    sData*% a = new sData;
    
    a.a = 123;
    a.b = 124;
    
    fun(string("ABC"));
    fun(a);
    
    return 0;
}
