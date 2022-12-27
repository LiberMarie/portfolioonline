/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** gestion menu
*/

#include "../include/my.h"

void init_menu_but_play(menu_t *menu)
{
    menu->text_play = sfTexture_createFromFile("menu/menu_start.png",
    NULL);
    menu->spr_play = sfSprite_create();
    menu->pos_play = (sfVector2f) {800, 400};
    menu->scale_play = (sfVector2f) {0.8, 0.8};
    sfSprite_setScale(menu->spr_play, menu->scale_play);
    sfSprite_setPosition(menu->spr_play, menu->pos_play);
    sfSprite_setTexture(menu->spr_play, menu->text_play, sfFalse);
}

void init_menu_background(menu_t *menu)
{
    menu->text_backgd = sfTexture_createFromFile("menu/Episaac.png",
    NULL);
    menu->spr_background = sfSprite_create();
    menu->pos_background = (sfVector2f) {0, 0};
    menu->scale_background = (sfVector2f) {2, 2};
    sfSprite_setScale(menu->spr_background, menu->scale_background);
    sfSprite_setPosition(menu->spr_background, menu->pos_background);
    sfSprite_setTexture(menu->spr_background, menu->text_backgd,
    sfFalse);
}

void init_menu_but_info(menu_t *menu)
{
    menu->text_info = sfTexture_createFromFile("menu/menu_info.png",
    NULL);
    menu->spr_info = sfSprite_create();
    menu->pos_info = (sfVector2f) {800, 600};
    menu->scale_info = (sfVector2f) {0.8, 0.8};
    sfSprite_setScale(menu->spr_info, menu->scale_info);
    sfSprite_setPosition(menu->spr_info, menu->pos_info);
    sfSprite_setTexture(menu->spr_info, menu->text_info, sfFalse);
}

void init_menu_but_quit(menu_t *menu)
{
    menu->text_quit = sfTexture_createFromFile("menu/menu_quit.png",
    NULL);
    menu->spr_quit = sfSprite_create();
    menu->pos_quit = (sfVector2f) {800, 800};
    menu->scale_quit = (sfVector2f) {0.8, 0.8};
    sfSprite_setScale(menu->spr_quit, menu->scale_quit);
    sfSprite_setPosition(menu->spr_quit, menu->pos_quit);
    sfSprite_setTexture(menu->spr_quit, menu->text_quit, sfFalse);
}