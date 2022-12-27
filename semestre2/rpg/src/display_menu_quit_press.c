/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** gestion menu
*/

#include "../include/my.h"

void display_menu_quit_press(menu_t *menu, window_t *win)
{
    sfRenderWindow_clear(win->window, sfBlack);
    sfRenderWindow_drawSprite(win->window, menu->spr_background, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_play, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_info, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_quit_press, NULL);
    sfRenderWindow_display(win->window);
}

void display_menu_start_press(menu_t *menu, window_t *win)
{
    sfRenderWindow_clear(win->window, sfBlack);
    sfRenderWindow_drawSprite(win->window, menu->spr_background, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_play_press, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_info, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_quit, NULL);
    sfRenderWindow_display(win->window);
}

void display_menu_info_press(menu_t *menu, window_t *win)
{
    sfRenderWindow_clear(win->window, sfBlack);
    sfRenderWindow_drawSprite(win->window, menu->spr_background, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_play, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_info_press, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_quit, NULL);
    sfRenderWindow_display(win->window);
}

void display_menu(menu_t *menu, window_t *win)
{
    sfRenderWindow_clear(win->window, sfBlack);
    sfRenderWindow_drawSprite(win->window, menu->spr_background, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_play, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_info, NULL);
    sfRenderWindow_drawSprite(win->window, menu->spr_quit, NULL);
}