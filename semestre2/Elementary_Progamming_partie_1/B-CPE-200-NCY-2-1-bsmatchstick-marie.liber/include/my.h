/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototype function
*/

#ifndef MY_H_
#define MY_H_

char *dbstr_to_str(char **tab, int haut, int longueur);
void print_updated_board_game(int line, int nb_matches);
int my_putstr(char const *str);
char **str_to_tab(char *str, int haut, int longueur);
void print_game_board(void);

#endif