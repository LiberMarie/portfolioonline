/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** anim_tears
*/

#include "../include/function.h"

void animation_tears(game_t *game)
{
    game->load.clk.time = sfClock_getElapsedTime(game->load.clk.clock);
    game->load.clk.seconds = game->load.clk.time.microseconds / 1000000.0;
    if (game->load.clk.seconds > 0.15) {
        game->load.tears.rect.height += 67;
        if (game->load.tears.rect.height >= 780)
            game->load.open = 0;
        sfClock_restart(game->load.clk.clock);
    }
    sfSprite_setTextureRect(game->load.tears.sprite, game->load.tears.rect);
}

int my_load(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->load.back.sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->load.tears.sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->load.eyes.sprite, NULL);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed) {
            game->end = 1;
            game->load.open = 0;
            sfRenderWindow_close(game->window);
        }
    }
    animation_tears(game);
    sfRenderWindow_display(game->window);
    return (0);
}