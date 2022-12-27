/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my_putstr
*/

#include "lib.h"

int my_putstr(char const *str)
{
    int i;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    my_putchar('\n');
    return (0);
}