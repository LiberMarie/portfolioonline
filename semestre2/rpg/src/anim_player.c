/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** anim_player
*/

#include "../include/function.h"

void animation_perso_down(game_t *game)
{
    game->perso.clk.time = sfClock_getElapsedTime(game->perso.clk.clock);
    game->perso.clk.seconds = game->perso.clk.time.microseconds / 1000000.0;
    if (game->perso.clk.seconds > 0.1) {
        game->perso.rect.left += 67;
        if (game->perso.rect.left >= 569)
            game->perso.rect.left += 0;
        sfClock_restart(game->perso.clk.clock);
    }
    sfSprite_setTextureRect(game->perso.sprite, game->perso.rect);
}

void animation_perso_up(game_t *game)
{
    game->perso.clk.time = sfClock_getElapsedTime(game->perso.clk.clock);
    game->perso.clk.seconds = game->perso.clk.time.microseconds / 1000000.0;
    if (game->perso.clk.seconds > 0.1) {
        game->perso.rect.left += 67;
        if (game->perso.rect.left >= 2140)
            game->perso.rect.left += 2010;
        sfClock_restart(game->perso.clk.clock);
    }
    sfSprite_setTextureRect(game->perso.sprite, game->perso.rect);
}

void animation_perso_right(game_t *game)
{
    game->perso.clk.time = sfClock_getElapsedTime(game->perso.clk.clock);
    game->perso.clk.seconds = game->perso.clk.time.microseconds / 1000000.0;
    if (game->perso.clk.seconds > 0.1) {
        game->perso.rect.left += 67;
        if (game->perso.rect.left >= 1943)
            game->perso.rect.left += 1340;
        sfClock_restart(game->perso.clk.clock);
    }
    sfSprite_setTextureRect(game->perso.sprite, game->perso.rect);
}

void animation_perso_left(game_t *game)
{
    game->perso.clk.time = sfClock_getElapsedTime(game->perso.clk.clock);
    game->perso.clk.seconds = game->perso.clk.time.microseconds / 1000000.0;
    if (game->perso.clk.seconds > 0.1) {
        game->perso.rect.left += 67;
        if (game->perso.rect.left >= 1273)
            game->perso.rect.left += 670;
        sfClock_restart(game->perso.clk.clock);
    }
    sfSprite_setTextureRect(game->perso.sprite, game->perso.rect);
}