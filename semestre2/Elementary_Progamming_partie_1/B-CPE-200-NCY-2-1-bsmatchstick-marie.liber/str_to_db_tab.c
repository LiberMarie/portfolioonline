/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** stock la string dans un double tableau
*/

#include <stdlib.h>

int calc_long(char *str)
{
    int i;

    for (i = 0; str[i] != '\n'; i++);
    return (i);
}

int calc_haut(char *str)
{
    int haut = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n'){
            haut++;
        }
    }
    haut++;
    return (haut);
}

char **str_to_tab(char *str, int haut, int longueur)
{
    int x = 0;
    int y = 0;
    int z = 0;

    char **tab = malloc(sizeof(char *) * haut);
    for (int a = 0; a < haut; a++)
        tab[a] = malloc(sizeof(char) * (longueur + 1));
    while (str[x] != '\0'){
        while (str[x] != '\n' && str[x] != '\0'){
            tab[y][z] = str[x];
            x++;
            z++;
        }
        tab[y][z] = '\0';
        if (str[x] == '\0')
            break;
        x++;
        y++;
        z = 0;
    }
    return (tab);
}