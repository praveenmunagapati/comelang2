#include <comelang2.h>

struct sInfo
{
    list<string>*% li;
};

int main()
{
    sInfo info;
    
    info.li = new list<string>();
    info.li.add(s"AAA").add(s"BBB");
    
    var li = clone info.li;
    
    li.add(s"CCC");
    
    puts(info.li.to_string());
    li.to_string().puts();
    
    return 0;
}
