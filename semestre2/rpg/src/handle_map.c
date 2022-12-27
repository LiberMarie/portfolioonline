/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** handle_map
*/

#include "../include/function.h"

void select_handlemap(game_t *game)
{
    switch (game->count_map){
    case 1:
        search_handle_map1(game);
    case 2:
        search_handle_map2(game);
    case 3:
        search_handle_map3(game);
    case 4:
        search_handle_map4(game);
    case 5:
        search_handle_map5(game);
    }
}

void handle_map(game_t *game)
{
    if (game->count_map == 0 && game->map[game->x + 1][game->y] == 'P'
    && game->event.key.code == sfKeyS){
        handle_map1(game);
    }
    select_handlemap(game);
    if (game->count_map == 6 && game->map[game->x + 1][game->y] == 'P'
    && game->event.key.code == sfKeyS &&
    game->event.type == sfEvtKeyReleased){
        handle_map2(game);
    }
}