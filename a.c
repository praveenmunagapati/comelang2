#include <comelang2.h>

int main(int argc, char** argv)
{
    char a[3] = { 'A', 'B', 'C', '\0' };
    
    var p = a.to_buffer();
    
    puts(p.to_string());
    
    return 0;
}

