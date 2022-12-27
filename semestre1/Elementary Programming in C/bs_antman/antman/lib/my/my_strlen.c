/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** calcul l taille d'une ligne
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}