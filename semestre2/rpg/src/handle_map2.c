/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** handle_map
*/

#include "../include/function.h"

void handle_map1(game_t *game)
{
    game->count_map = 1;
    game->boolean_map = 1;
    game->boolean = 1;
}

void handle_map2(game_t *game)
{
    game->count_map = 0;
    game->boolean = 1;
    game->boolean_map = 1;
}

void handle_map3(game_t *game)
{
    game->count_map = 2;
    game->boolean = 1;
    game->boolean_map = 2;
}

void handle_map4(game_t *game)
{
    game->count_map = 1;
    game->boolean = 1;
    game->boolean_map = 4;
}

void handle_map5(game_t *game)
{
    game->count_map = 3;
    game->boolean = 1;
    game->boolean_map = 2;
}