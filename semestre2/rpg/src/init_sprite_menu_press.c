/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** gestion menu
*/

#include "../include/my.h"

void init_menu_but_play_pressed(menu_t *menu)
{
    menu->text_play_press = sfTexture_createFromFile("menu/menu_start_s.png",
    NULL);
    menu->spr_play_press = sfSprite_create();
    menu->pos_play_press = (sfVector2f) {800, 400};
    menu->scale_play_press = (sfVector2f) {0.8, 0.8};
    sfSprite_setScale(menu->spr_play_press, menu->scale_play_press);
    sfSprite_setPosition(menu->spr_play_press, menu->pos_play_press);
    sfSprite_setTexture(menu->spr_play_press, menu->text_play_press, sfFalse);
}

void init_menu_but_info_pressed(menu_t *menu)
{
    menu->text_info_press = sfTexture_createFromFile("menu/menu_info_s.png",
    NULL);
    menu->spr_info_press = sfSprite_create();
    menu->pos_info_press = (sfVector2f) {800, 600};
    menu->scale_info_press = (sfVector2f) {0.8, 0.8};
    sfSprite_setScale(menu->spr_info_press, menu->scale_info_press);
    sfSprite_setPosition(menu->spr_info_press, menu->pos_info_press);
    sfSprite_setTexture(menu->spr_info_press, menu->text_info_press, sfFalse);
}

void init_menu_but_quit_pressed(menu_t *menu)
{
    menu->text_quit_press = sfTexture_createFromFile("menu/menu_quit_s.png",
    NULL);
    menu->spr_quit_press = sfSprite_create();
    menu->pos_quit_press = (sfVector2f) {800, 800};
    menu->scale_quit_press = (sfVector2f) {0.8, 0.8};
    sfSprite_setScale(menu->spr_quit_press, menu->scale_quit_press);
    sfSprite_setPosition(menu->spr_quit_press, menu->pos_quit_press);
    sfSprite_setTexture(menu->spr_quit_press, menu->text_quit_press, sfFalse);
}