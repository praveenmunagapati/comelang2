#include <comelang2.h>

struct sClass {
    string mName;
};

sClass*% sClass*::initialize(sClass*% self, char* name)
{
    self.mName = string(name);
    
    return self;
}

int main(int argc, char** argv)
{
    
    return 0;
}

