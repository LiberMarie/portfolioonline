/*
** EPITECH PROJECT, 2021
** bs_matchstick
** File description:
** print game board 4lines
*/

#include <stdlib.h>

char *dbstr_to_str(char **tab, int haut, int longueur)
{
    int x = 0;
    int y = 0;
    int a = 0;
    int taille = (haut + 1) * (longueur + 1) + 1;
    char *str = malloc(sizeof(char) * taille);

    for (int i = 0; i <= haut; i++){
        if (i >= haut)
            break;
        while (tab[x][y] != '\0'){
            str[a] = tab[x][y];
            y++;
            a++;
        }
        str[a] = '\n';
        a++;
        x++;
        y = 0;
    }
    str[a] = '\0';
    return (str);
}