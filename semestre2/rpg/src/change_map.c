/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** change_map
*/

#include "../include/function.h"

void handle_change_map(game_t *game)
{
    switch (game->count_map){
    case 0:
        if (game->boolean_map == 1 && game->boolean == 1)
            display_map(game);
    case 1:
        search_handle1(game);
    case 2:
        search_handle2(game);
    case 3:
        search_handle3(game);
    case 4:
        search_handle4(game);
    case 5:
        search_handle5(game);
    case 6:
        if (game->boolean_map == 3 && game->boolean == 1)
            display_map12(game);
    }
}