/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** calcul du delta
*/

int delta(int a, int b, int c)
{
    int delta;
    
    delta = (b * b) - (4 * a * c);
    return(delta);
}
