#include"include/my.h"

int search_type_firstarg(variable_t *var)
{
    if (var->opt == 1){
        sphere(var);
    }
    else if (var->opt == 2){
        cylinder(var);
    }
    else if(var->opt == 3){
        cone(var);
    }
    return(0);
}