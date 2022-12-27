/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCY-2-1-mydefender-gaspard.bilde
** File description:
** str_to_word_array
*/

#include "function.h"

static int alpha(char c)
{
    if (c <= '\n' || c >= 127)
        return (0);
    return (1);
}

static int nb_words(char const *str)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0') {
        if (alpha(str[i]) == 1)
            words += 1;
        while (alpha(str[i]) == 1 && str[i] != '\0')
            i += 1;
        if (str[i] != '\0')
            i += 1;
    }
    return (words);
}

static int word_len(char const *str, int k)
{
    int len = 0;

    while (alpha(str[k]) == 1) {
        k += 1;
        len += 1;
    }
    return (len);
}

char **str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (nb_words(str) + 1));
    int i = 0;
    int k = 0;
    int a = 0;

    while (i != nb_words(str)) {
        a = 0;
        while (alpha(str[k]) == 0)
            k += 1;
        array[i] = malloc(sizeof(char) * (word_len(str, k) + 1));
        while (alpha(str[k]) == 1) {
            array[i][a] = str[k];
            a += 1;
            k += 1;
        }
        array[i][a] = '\0';
        i += 1;
    }
    array[i] = NULL;
    return (array);
}