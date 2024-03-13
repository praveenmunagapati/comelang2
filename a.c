#include <comelang2.h>

int main()
{
    var li = [1,2,3,3];
    
    li.remove(3);
    
    li.to_string().puts();
    
    return 0;
}
