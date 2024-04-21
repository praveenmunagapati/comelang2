#include <comelang2.h>

int main(int argc, char** argv)
{
    var m = ["AAA":"AAA", "BBB":"BBB"];
    
    char* l = m["CCC"]??;
    
    return 0;
}

