/*
** EPITECH PROJECT, 2021
** main
** File description:
** My_RPG
*/

#include "../include/my.h"

void info(window_t *win, menu_t *menu)
{
    while (1) {
        sfRenderWindow_clear(win->window, sfBlack);
        sfRenderWindow_drawSprite(win->window, menu->spr_background, NULL);
        sfRenderWindow_display(win->window);
        if (sfRenderWindow_pollEvent(win->window, &win->event) && sfKeyboard_isKeyPressed(sfKeyEscape))
            break;
    }
}