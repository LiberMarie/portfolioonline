/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** intersection
*/

#include"include/my.h"
#include <stdlib.h>

int intersection(int ac, char **av)
{
    variable_t *var = malloc(sizeof(variable_t));
    to_struct(av, var);
    search_type_firstarg(var);

    free(var);
    return (0);
}