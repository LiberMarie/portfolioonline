#include"include/my.h"
#include <stddef.h>

int verif_str(char *str)
{
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] != '\0'){
        if (str[i] <= '9' && str[i] >= '0')
            i++;
        else
            return (84);
    }
    return(0);
}

int verif_str_int(char **str)
{
    int res = 0;
    int i = 1;

    while (str[i] != NULL)
    {
        if(verif_str(str[i]) == 84){
            res++;
            i++;
        }
        else
            i++;
    }
    return(res);
}

