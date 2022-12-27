/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** gestion menu
*/

#include "../include/my.h"
#include "function.h"

void init_menu(menu_t *menu, window_t *win)
{
    win->mode = (sfVideoMode) {1920, 1080, 32};
    win->window = sfRenderWindow_create(win->mode, "Episaac",
    sfResize | sfClose, NULL);
    init_menu_background(menu);
    init_menu_but_play(menu);
    init_menu_but_info(menu);
    init_menu_but_quit(menu);
    init_menu_but_play_pressed(menu);
    init_menu_but_info_pressed(menu);
    init_menu_but_quit_pressed(menu);
    sound_set(menu->music, "assets/music/game.ogg");
    sfRenderWindow_setFramerateLimit(win->window, 60);
    sfRenderWindow_setMouseCursorVisible(win->window, sfTrue);
}

int menu(void)
{
    window_t *win = malloc(sizeof(window_t));
    menu_t *menu = malloc(sizeof(menu_t));
    if (win == NULL || menu == NULL)
        return (84);
    init_menu(menu, win);
    while (sfRenderWindow_isOpen(win->window)) {
        win->mouse = sfMouse_getPositionRenderWindow(win->window);
        while (win->mouse.x >= 800
        && win->mouse.x <= 1115 && win->mouse.y >= 800
        && win->mouse.y <= 915){
            display_menu_quit_press(menu, win);
            win->mouse = sfMouse_getPositionRenderWindow(win->window);
            if (sfRenderWindow_pollEvent(win->window, &win->event)
            && sfMouse_isButtonPressed(sfMouseLeft)){
                    sfRenderWindow_close(win->window);
            }
        }
        while (win->mouse.x >= 800 && win->mouse.x <= 1115
        && win->mouse.y >= 400 && win->mouse.y <= 515){
            display_menu_start_press(menu, win);
            win->mouse = sfMouse_getPositionRenderWindow(win->window);
            if (sfRenderWindow_pollEvent(win->window, &win->event)
            && sfMouse_isButtonPressed(sfMouseLeft)){
                    if (game_play(win, menu) == 84)
                        return (84);
            }
        }
        while (win->mouse.x >= 800 && win->mouse.x <= 1115
        && win->mouse.y >= 600 && win->mouse.y <= 715){
            display_menu_info_press(menu, win);
            win->mouse = sfMouse_getPositionRenderWindow(win->window);
            if (sfRenderWindow_pollEvent(win->window, &win->event)
            && sfMouse_isButtonPressed(sfMouseLeft)){
                    info(win, menu);
            }
        }
        while (sfRenderWindow_pollEvent(win->window, &win->event)){
            if (win->event.type == sfEvtClosed
            || sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(win->window);
        }
        if (win->event.type == sfEvtClosed)
            sfRenderWindow_close(win->window);
        display_menu(menu, win);
        sfRenderWindow_display(win->window);
        sfRenderWindow_clear(win->window, sfBlack);
    }
    sfRenderWindow_destroy(win->window);
    return (0);
}