
int printf(const char* anonymous_var_nameX46, ...);

struct sInfo
{
    int a;
    int b;
};

void parse_type(sInfo* info=info, bool parse_variable_name=false, bool parse_multiple_type=true, bool in_function_parametor=false)
{
    printf("info %p parse_variable_name %d parse_multiple_type %d, in_function_parametor %d\n", info, parse_variable_name, parse_multiple_type, in_function_parametor);
}

int main(int argc, char** argv)
{
    sInfo* info = null;
    
    parse_type(parse_variable_name:true);
    
    return 0;
}
