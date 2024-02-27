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
        return self.a.to_string();
    }
    template<R> R map2(sData<T>*% self, R str) {
        list<R>*% list = new list<R>();
        
        return string("ABC");
    }
}


int main(int argc, char** argv) 
{
/*
    sData<int>*% data = new sData<int>;
    
    data.a = 111;
    data.b = 222;
    
    var xxx = data.map<string>(s"ABC").scan(/./).join("+");
    
    puts(xxx);
    
    data.map2<string>(s"ABC");
*/
    
    var a = ["1", "2", "3"].map2<int> { return atoi(it); }
    
    foreach(it, a) {
        printf("%d\n", it);
    }
    
    return 0;
}
