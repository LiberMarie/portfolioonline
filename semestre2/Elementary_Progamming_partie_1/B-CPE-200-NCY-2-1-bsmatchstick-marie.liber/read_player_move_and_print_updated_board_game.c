/*
** EPITECH PROJECT, 2021
** bs_matchstick
** File description:
** print game board 4lines
*/

#include <stdio.h>

void read_player_move_and_print_updated_board_game(void)
{
    ssize_t size = 0;
    char *line = NULL;
    int nb = 0;

    my_putstr("Line:");
    getline(&line, &size, stdin);
    printf("%s\n", line);
    
}