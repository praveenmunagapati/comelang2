#include "common.h"

ZVALUE*%, bool str_method(string fun_name, ZVALUE* obj, list<ZVALUE*%>* params, buffer* codes, sInfo* info) version 3
{
    if(fun_name === "sub_block") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            come_regex* param0 = params[0].regexValue;
            
            string str = obj.strValue.to_string().sub_block(param0) {
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<string>* group_strings = it2;
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
/*
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone codes;
                info2.nodes = null;
                info2.op = (int*)info2.codes.buf;
                info2.head = (char*)info2.op;
                info2.stack = new list<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
*/
            };
            
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true);
        }
    }
/*
    else if(fun_name === "sub_block_count") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            string str = obj.strValue.to_string().sub_block_count(param0, param1) {
                using unsafe; 
                
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<string>* group_strings = it2;
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone codes;
                info2.nodes = null;
                info2.op = (int*)info2.codes.buf;
                info2.head = (char*)info2.op;
                info2.stack = new list<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            };
            
            return (new ZVALUE(kind:kStrValue, str_value:str.to_wstring()), true);
        }
    }
    else if(fun_name === "scan_block") {
        if(params.length() == 1 && params[0].kind == kRegexValue) {
            come_regex* param0 = params[0].regexValue;
            
            list<string>*% list1 = obj.strValue.to_string().scan_block(param0) {
                using unsafe; 
                
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                list<string>* group_strings = it2;
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone codes;
                info2.nodes = null;
                info2.op = (int*)info2.codes.buf;
                info2.head = (char*)info2.op;
                info2.stack = new list<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            }
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            };
            
            return (new ZVALUE(kind:kListValue, list_value:clone list2), true);
        }
    }
    else if(fun_name === "scan_block_count") {
        if(params.length() == 2 && params[0].kind == kRegexValue && params[1].kind == kIntValue) {
            come_regex* param0 = params[0].regexValue;
            int param1 = params[1].intValue;
            
            list<string>*% list1 = obj.strValue.to_string().scan_block_count(param0, param1) {
                using unsafe; 
                
                ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                append_var(name:"it".to_wstring(), value: value);
                
                list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                
                list<string>* group_strings = it2;
                
                foreach(it, group_strings) {
                    list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                }
                
                ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                append_var(name:"it2".to_wstring(), value: value2);
                
                sInfo info2;
                
                info2.p = null;
                info2.command = null;
                info2.codes = clone codes;
                info2.nodes = null;
                info2.op = (int*)info2.codes.buf;
                info2.head = (char*)info2.op;
                info2.stack = new list<ZVALUE*%>();
                info2.loop_head = 0;
                info2.breaks = null;
                info2.result_value = null;
                info2.stack_num = 0;
                
                while(*info2.op) {
                    if(!vm(&info2)) {
                        exit(1);
                    }
                }
                
                if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                    fprintf(stderr, "invalid block result value\n");
                    exit(1);
                }
                
                return info2.result_value.strValue.to_string();
            }
            
            list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
            
            foreach(it, list1) {
                list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
            };
            
            return (new ZVALUE(kind:kListValue, list_value:clone list2), true);
        }
    }
*/
    
    return inherit(fun_name, obj, params, codes, info);
}
