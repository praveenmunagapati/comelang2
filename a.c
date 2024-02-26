#include <comelang2.h>
#include <comelang2-str.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    template<R> R map(sData<T>* self, R str) {
        return self.a.to_string() + str;
    }
}


int main(int argc, char** argv) 
{
    sData<int>*% data = new sData<int>;
    
    data.a = 111;
    data.b = 222;
    
    string xxx = data.map(s"ABC");
    
    puts(xxx);
    
    return 0;
}
