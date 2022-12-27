#include"include/my.h"

int verif_lenght(int ac)
{
    if(ac != 9){
        display_mess_error();
        return(84);
    }
    else
        return(0);
}
