#include <comelang2.h>
#include <comelang2-str.h>

struct ZVALUE;

struct ZVALUE 
{
    enum { kIntValue, kStrValue, kBoolValue, kNullValue, kFileValue, kRegexValue, kListValue, kMapValue } kind;
    
    int intValue;
    wstring strValue;
    bool boolValue;
    FILE* fileValue;
    come_regex*% regexValue;
    list<ZVALUE*%>*% listValue;
    map<ZVALUE*%, ZVALUE*%>*% mapValue;
};

string ZVALUE*::to_string(ZVALUE* self);

unsigned int ZVALUE*::get_hash_key(ZVALUE* self)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue.get_hash_key();
            
        case kStrValue:
            return self.strValue.get_hash_key();
            
        case kBoolValue:
            return self.boolValue.get_hash_key();
            
        case kFileValue:
            if(self.fileValue == stdin) {
                return xsprintf("stdin").get_hash_key();
            }
            else if(self.fileValue == stdout) {
                return xsprintf("stdout").get_hash_key();
            }
            else if(self.fileValue == stderr) {
                return xsprintf("stderr").get_hash_key();
            }
            else {
                int file_no = fileno(self.fileValue);
                
                return xsprintf("file discriptor: %d", file_no).get_hash_key();
            }
            break;
            
        case kNullValue:
            return xsprintf("null").get_hash_key();
            break;
            
        case kRegexValue:
            return self.regexValue.get_hash_key();
            break;
            
        case kListValue:
            return self.to_string().get_hash_key();
            break;
            
        case kMapValue: 
            return self.to_string().get_hash_key();
            break;
    }
    
    return 0;
}

bool ZVALUE*::equals(ZVALUE* self, ZVALUE* right)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue.equals(right.intValue);
            
        case kStrValue:
            return self.strValue.equals(right.strValue);
            
        case kBoolValue:
            return self.boolValue.equals(right.boolValue);
            
        case kFileValue:
            return self.fileValue == right.fileValue;
            break;
            
        case kNullValue:
            return right.kind == kNullValue;
            break;
            
        case kRegexValue:
            return self.regexValue.equals(right.regexValue);
            break;
            
        case kListValue:
            return self.listValue.equals(right.listValue);
            break;
            
        case kMapValue: 
            return self.mapValue.equals(right.mapValue);
            break;
    }
    
    return false;
}

int ZVALUE*::compare(ZVALUE* self, ZVALUE* right)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue.compare(right.intValue);
            
        case kStrValue:
            return self.strValue.compare(right.strValue);
            
        case kBoolValue:
            return self.boolValue.compare(right.boolValue);
            
        case kFileValue:
            return self.fileValue == right.fileValue;
            break;
            
        case kNullValue:
            return right.kind == kNullValue;
            break;
            
        case kRegexValue:
            return self.regexValue == right.regexValue;
            break;
            
        case kListValue:
            return self.listValue == right.listValue;
            break;
            
        case kMapValue: 
            return self.mapValue == right.mapValue;
            break;
    }
    
    return false;
}

string ZVALUE*::to_string(ZVALUE* self)
{
    switch(self.kind) {
        case kIntValue:
            return xsprintf("%d", self.intValue);
            break;
            
        case kStrValue:
            return xsprintf("%ls", self.strValue);
            break;
            
        case kBoolValue:
            if(self.boolValue) {
                return xsprintf("true");
            }
            else {
                return xsprintf("false");
            }
            break;
            
        case kFileValue:
            if(self.fileValue == stdin) {
                return xsprintf("stdin");
            }
            else if(self.fileValue == stdout) {
                return xsprintf("stdout");
            }
            else if(self.fileValue == stderr) {
                return xsprintf("stderr");
            }
            else {
                int file_no = fileno(self.fileValue);
                
                return xsprintf("file discriptor: %d", file_no);
            }
            break;
            
        case kNullValue:
            return xsprintf("null");
            break;
            
        case kRegexValue:
            return self.regexValue.to_string();
            break;
            
        case kListValue: {
            buffer*% buf = new buffer.initialize();
            
            buf.append_str("[");
            
            list<ZVALUE*%>* list_ = self.listValue;
            int n = 0;
            foreach(it, list_) {
                buf.append_str(it.to_string());
                
                n++;
                
                if(n < list_.length()) {
                    buf.append_str(",");
                }
            }
            
            buf.append_str("]");
            
            return buf.to_string();
            }
            break;
            
        case kMapValue: {
            buffer*% buf = new buffer.initialize();
            
            buf.append_str("[");
            
            map<ZVALUE*%, ZVALUE*%>* map_ = self.mapValue;
            int n = 0;
            foreach(it, map_) {
                ZVALUE* item = map_[it];
                buf.append_str(it.to_string());
                buf.append_str(":");
                if(item == null) {
                    buf.append_str("null");
                }
                else {
                    buf.append_str(item.to_string());
                }
                
                n++;
                
                if(n < map_.length()) {
                    buf.append_str(",");
                }
            }
            
            buf.append_str("]");
            
            return buf.to_string();
            }
            break;
    }
    
    return string("");
}

bool ZVALUE*::equals(ZVALUE* self, ZVALUE* right)
{
    switch(self.kind) {
        case kIntValue:
            return self.intValue.equals(right.intValue);
            
        case kStrValue:
            return self.strValue.equals(right.strValue);
            
        case kBoolValue:
            return self.boolValue.equals(right.boolValue);
            
        case kFileValue:
            return self.fileValue == right.fileValue;
            break;
            
        case kNullValue:
            return right.kind == kNullValue;
            break;
            
        case kRegexValue:
            return self.regexValue.equals(right.regexValue);
            break;
            
        case kListValue:
            return self.listValue.equals(right.listValue);
            break;
            
        case kMapValue: 
            return self.mapValue.equals(right.mapValue);
            break;
    }
    
    return false;
}

ZVALUE*% ZVALUE*::initialize(ZVALUE*% self, int kind, int int_value=0, wstring str_value=wstring(""), bool bool_value=false, FILE* file_value=null, come_regex*% regex_value=null, list<ZVALUE*%>*% list_value=null, map<ZVALUE*%, ZVALUE*%>*% map_value=null)
{
    self.kind = kind;
    self.intValue = int_value;
    self.strValue = clone str_value;
    self.boolValue = bool_value;
    self.fileValue = file_value;
    self.regexValue = clone regex_value;
    self.listValue = clone list_value;
    self.mapValue = clone map_value;
    
    return self;
}

int main(int argc, char** argv) 
{
    map<ZVALUE*%, ZVALUE*%>*% m = new map<ZVALUE*%, ZVALUE*%>();
    
    m.insert(new ZVALUE(kind:kStrValue, str_value:wstring("AAA")), new ZVALUE(kind:kIntValue, int_value:123));
    m.insert(new ZVALUE(kind:kStrValue, str_value:wstring("BBB")), new ZVALUE(kind:kIntValue, int_value:456));
    
/*
    var value = m.at(new ZVALUE(kind:kStrValue, str_value:wstring("AAA")), null);
    
    printf("%d\n", value.intValue);
    
    list<ZVALUE*%>*% stack = new list<ZVALUE*%>();
    
    stack.add(new ZVALUE(kind:kMapValue, map_value:m));
    
    ZVALUE*% zvalue = clone stack[-1];
    
    printf("zvalue %p %p\n", zvalue,zvalue.mapValue);
    
    var value2 = zvalue.mapValue.at(new ZVALUE(kind:kStrValue, str_value:wstring("AAA")), null);
    
    printf("%d\n", value2.intValue);
*/
    var m2 = clone m;
    
    foreach(it, m2) {
        printf("%ls\n", it->strValue);
    }
    
/*
    var value2 = m2.at(new ZVALUE(kind:kStrValue, str_value:wstring("AAA")), null);
    
    printf("%d\n", value2.intValue);
*/
    
    return 0;
}
