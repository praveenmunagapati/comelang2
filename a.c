#include <comelang2.h>
#include <comelang2-str.h>

int main(int argc, char** argv) 
{
    var str = "cd aaa".scan(/^cd +(.+)/).item(1, null).to_string().puts();
    
    return 0;
}
