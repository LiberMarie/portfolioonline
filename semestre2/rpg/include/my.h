/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** rpg
*/

////////////////////////////////////////////////////////////////////////
///////////////////////include//////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include "function.h"

////////////////////////////////////////////////////////////////////////
///////////////////////structure////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

//window
typedef struct window_s
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mouse;
}window_t;

//jeu

typedef struct back_t
{
    sfIntRect rect;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
} back_t;



//items jeu

typedef struct {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f scale;
} item_set_t;

typedef struct item_s
{
    item_set_t piqure;
    item_set_t oeil;
    item_set_t fauxscie;
    item_set_t feu;
    item_set_t calice;
    item_set_t oeilsang;
    item_set_t oeil2;
    item_set_t etoile;
    item_set_t bombe;
    item_set_t feucoeur;
} item_t;

//menu

typedef struct menu_s
{
    sfTexture *text_backgd;
    sfSprite *spr_background;
    sfVector2f pos_background;
    sfVector2f scale_background;
    sfTexture *text_play;
    sfSprite *spr_play;
    sfVector2f pos_play;
    sfVector2f scale_play;
    sfTexture *text_quit;
    sfSprite *spr_quit;
    sfVector2f pos_quit;
    sfVector2f scale_quit;
    sfTexture *text_info;
    sfSprite *spr_info;
    sfVector2f pos_info;
    sfVector2f scale_info;
    sfTexture *text_backgd_press;
    sfSprite *spr_background_press;
    sfVector2f pos_background_press;
    sfVector2f scale_background_press;
    sfTexture *text_play_press;
    sfSprite *spr_play_press;
    sfVector2f pos_play_press;
    sfVector2f scale_play_press;
    sfTexture *text_quit_press;
    sfSprite *spr_quit_press;
    sfVector2f pos_quit_press;
    sfVector2f scale_quit_press;
    sfTexture *text_info_press;
    sfSprite *spr_info_press;
    sfVector2f pos_info_press;
    sfVector2f scale_info_press;
    sfText* title;
    sound music;
} menu_t;

////////////////////////////////////////////////////////////////////////
///////////////////////function/////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

////////////////////////////game////////////////////////////////////////
void init_pers(game_t *game);
void moove(window_t *win, menu_t *menu, game_t *game);
int game_play(window_t *win, menu_t *menu);
void init_rect_up(game_t *game);
void init_rect_down(game_t *game);
void init_rect_right(game_t *game);
void init_rect_left(game_t *game);

////////////////////////////menu////////////////////////////////////////

int menu(void);
void info(window_t *win, menu_t *menu);

//init menu

void display_menu(menu_t *menu, window_t *win);
void display_menu_quit_press(menu_t *menu, window_t *win);
void display_menu_start_press(menu_t *menu, window_t *win);
void display_menu_info_press(menu_t *menu, window_t *win);

//init menu

void init_menu(menu_t *menu, window_t *win);
void init_menu_but_quit(menu_t *menu);
void init_menu_but_info(menu_t *menu);
void init_menu_but_play(menu_t *menu);
void init_menu_background(menu_t *menu);
void init_menu_but_quit_pressed(menu_t *menu);
void init_menu_but_info_pressed(menu_t *menu);
void init_menu_but_play_pressed(menu_t *menu);
void init_menu_background_pressed(menu_t *menu);
void init_items(item_t *item);

////////////////////////////////////////////////////////////////////////
///////////////////////end//////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////