/*
** EPITECH PROJECT, 2021
** my_amazing_sorter
** File description:
** affiche les instructions de trie
*/

#include <stdio.h>
//#include "my.h"

int verif_string(int *array, int size)
{
    int x = 0;

    for (int i = 0; i != size - 1; i++){
        if (array[i] < array[i + 1])
            x++;
        else{
            printf("84\n");
            return (84);
        }
    }
    printf("0\n");
    return (0);
}

void swap_right(int *array, int size)
{
    int x = 0;

    x = array[size - 1];
    for (int i = 1; size - i != 0; i++)
        array[size - i] = array[size - i - 1];
    array[0] = x;
}

void swap_left(int *array, int size)
{
    int x = 0;

    x = array[0];
    for (int i = 0; i != size - 1; i++){
        array[i] = array[i + 1];
    }
    array[size - 1] = x;
}

int my_amazing_sorter(int *array, int size)
{   
    while (verif_string(array, size) == 84){
        if (array[0] > array[1]){
            printf("sa ");
            swap_elem(array, 0, 1);
        }
        else if (array[0] < array[size - 1]){
            swap_right(array, size);
            printf("ra ");
        }
        else if (array[0] > array[size - 1]){
            swap_left(array, size);
            printf("rra ");
        }
    }
    return (0);
}

void swap_elem(int **array, int index1, int index2)
{
    int *x;

    x = array[index1];
    array[index1] = array[index2];
    array[index2] = x;
}

void printarray(int *array, int size)
{
    for (int i = 0; i != size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[6] = {1 , 3, 5, 6, 8, 12};
    int size = 6;
    printf("go\n");

    verif_string(array, size);
    my_amazing_sorter(array, size);
    printarray(array, size);
    return (0);
}