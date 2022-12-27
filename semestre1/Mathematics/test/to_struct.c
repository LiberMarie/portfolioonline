/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** intersection
*/

#include"include/my.h"
#include <stdio.h>
#include <stdlib.h>

variable_t *to_struct(char **av, variable_t *var)
{
    var->opt = strtof(av[1], NULL);
    var->xp = strtof(av[2], NULL);
    var->yp = strtof(av[3], NULL);
    var->zp = strtof(av[4], NULL);
    var->xv = strtof(av[5], NULL);
    var->yv = strtof(av[6], NULL);
    var->zv = strtof(av[7], NULL);
    var->p = strtof(av[8], NULL);

    return(var);
}