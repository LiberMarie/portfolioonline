/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** handle_map
*/

#include "../include/function.h"

void search_handle_map1(game_t *game)
{
    if (game->map[game->x - 1][game->y] == 'P'
    && game->event.key.code == sfKeyZ)
        handle_map2(game);
    if (game->map[game->x][game->y + 1] == 'P'
    && game->event.key.code == sfKeyD)
        handle_map3(game);
}

void search_handle_map2(game_t *game)
{
    if (game->map[game->x][game->y - 1] == 'P'
    && game->event.key.code == sfKeyQ)
        handle_map4(game);
    if (game->map[game->x][game->y + 1] == 'P'
    && game->event.key.code == sfKeyD &&
    game->event.type == sfEvtKeyReleased)
        handle_map5(game);
}

void search_handle_map3(game_t *game)
{
    if (game->map[game->x][game->y - 1] == 'P'
    && game->event.key.code == sfKeyQ
    && game->event.type == sfEvtKeyReleased)
        handle_map6(game);
    if (game->map[game->x - 1][game->y] == 'P'
    && game->event.key.code == sfKeyZ &&
    game->event.type == sfEvtKeyReleased)
        handle_map7(game);
}

void search_handle_map4(game_t *game)
{
    if (game->map[game->x + 1][game->y] == 'P'
    && game->event.key.code == sfKeyS &&
    game->event.type == sfEvtKeyReleased)
        handle_map8(game);
    if (game->map[game->x - 1][game->y] == 'P'
    && game->event.key.code == sfKeyZ &&
    game->event.type == sfEvtKeyReleased)
        handle_map9(game);
}

void search_handle_map5(game_t *game)
{
    if (game->map[game->x + 1][game->y] == 'P'
    && game->event.key.code == sfKeyS &&
    game->event.type == sfEvtKeyReleased)
        handle_map10(game);
    if (game->map[game->x - 1][game->y] == 'P'
    && game->event.key.code == sfKeyS &&
    game->event.type == sfEvtKeyReleased)
        handle_map11(game);
}