#include <comelang2.h>

int main(int argc, char** argv)
{
    var li = ["1", "2", "3"].map2<int> { return atoi(it); }
    
    printf("%d\n", li[0]);
    
    return 0;
}

