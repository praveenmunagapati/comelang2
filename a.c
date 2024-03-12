#include <comelang2.h>

typedef int XXX;

typedef int XXX;

enum { kA, kB, kC };

enum { kA, kB, kC };

union uData
{
    int a;
    float b;
};

union uData
{
    double c;
    long a;
};

struct sData
{
    int a;
    int b;
};

struct sData
{
    int x;
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
