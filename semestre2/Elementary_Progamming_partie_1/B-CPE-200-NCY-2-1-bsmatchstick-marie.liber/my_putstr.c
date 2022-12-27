/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my_putstr
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    write(1, str, i);
    return (0);
}