/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** change_map
*/

#include "../include/function.h"

void search_handle1(game_t *game)
{
    if (game->boolean_map == 1 && game->boolean == 1)
        display_map2(game);
    if (game->boolean_map == 4 && game->boolean == 1)
        display_map3(game);
}

void search_handle2(game_t *game)
{
    if (game->boolean_map == 2 && game->boolean == 1)
        display_map4(game);
    if (game->boolean_map == 4 && game->boolean == 1)
        display_map5(game);
}

void search_handle3(game_t *game)
{
    if (game->boolean_map == 2 && game->boolean == 1)
        display_map6(game);
    if (game->boolean_map == 4 && game->boolean == 1)
        display_map7(game);
}

void search_handle4(game_t *game)
{
    if (game->boolean_map == 3 && game->boolean == 1)
        display_map8(game);
    if (game->boolean_map == 1 && game->boolean == 1)
        display_map9(game);
}

void search_handle5(game_t *game)
{
    if (game->boolean_map == 3 && game->boolean == 1)
        display_map10(game);
    if (game->boolean_map == 1 && game->boolean == 1)
        display_map11(game);
}