/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int x = 0;

    x = *a;
    *a = *b;
    *b = x;
}