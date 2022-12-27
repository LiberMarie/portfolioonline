/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** handle_move
*/

#include "../include/function.h"

static void moove_u(game_t *game)
{
    game->x--;
    game->perso.pos.y -= 16;
    game->perso.rect.left = 2010;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    animation_perso_up(game);
}

static void moove_d(game_t *game)
{
    game->x++;
    game->perso.pos.y += 16;
    game->perso.rect.left = 0;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    animation_perso_down(game);
}

static void moove_l(game_t *game)
{
    game->y--;
    game->perso.pos.x -= 16;
    game->perso.rect.left = 670;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    animation_perso_left(game);
}

static void moove_r(game_t *game)
{
    game->y++;
    game->perso.rect.left = 1340;
    game->perso.pos.x += 16;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    animation_perso_right(game);
}

void handle_move(game_t *game)
{
    if (game->event.key.code == sfKeyZ &&
        game->map[game->x - 1][game->y] == ' ')
        moove_u(game);
    if (game->event.key.code == sfKeyS &&
        game->map[game->x + 1][game->y] == ' ')
        moove_d(game);
    if (game->event.key.code == sfKeyD &&
        game->map[game->x][game->y + 1] == ' ')
        moove_r(game);
    if (game->event.key.code == sfKeyQ &&
        game->map[game->x][game->y - 1] == ' ')
        moove_l(game);
}