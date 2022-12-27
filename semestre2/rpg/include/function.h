/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/Window/Event.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>


typedef struct {
    sfSound *sound;
    sfSoundBuffer *soundbuffer;
} sound;

typedef struct {
    sfTime time;
    float seconds;
    sfClock *clock;
} clck_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
} background_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    clck_t clk;
} perso_t;

typedef struct {
    int open;
    background_t back;
    background_t tears;
    background_t eyes;
    clck_t clk;
} loading_t;

typedef struct {
    loading_t load;
    sfVideoMode buffer;
    sfRenderWindow *window;
    sfEvent event;
    char **map;
    int x;
    int y;
    background_t one;
    perso_t perso;
    int end;
    int count_map;
    int boolean_map;
    int boolean;
} game_t;

typedef struct obj_s
    {
        int type;
        sfImage *img;
        sfTexture *tex;
        sfSprite *spr;
        sfVector2f pos;
        sfIntRect rect;
        float speed;
    } obj_t;

 typedef struct sprt_s
    {
        obj_t *back_menu;
        obj_t *back_game;
        obj_t *menu_start;
        obj_t *menu_start_s;
        obj_t *menu_info;
        obj_t *menu_info_s;
        obj_t *menu_quit;
        obj_t *menu_quit_s;
        obj_t *rules;
        obj_t *game_pause;
        obj_t *pause_resume;
        obj_t *pause_resume_s;
        obj_t *pause_quit;
        obj_t *pause_quit_s;
        obj_t *loading_isaac;
        obj_t *tears;
        obj_t *loading_head;
        obj_t *left;
        obj_t *right;
        obj_t *up;
        obj_t *down;
        obj_t *htp;
        obj_t *npc_coin;
        obj_t *npc_quest;
        obj_t *shop;
    } sprt_t;

char **str_to_word_array(char const *);
char *file_to_str(char const *filepath);
void animation_perso_up(game_t *game);
void animation_perso_down(game_t *game);
void animation_perso_right(game_t *game);
void animation_perso_left(game_t *game);
int my_load(game_t *game);
void animation_tears(game_t *game);
void handle_change_map(game_t *game);
perso_t perso_init(char *path);
background_t background_init(char *path, int height, int y);
sfVideoMode init_buffer(void);
void fill_up_game_t(game_t *game);
void handle_map(game_t *game);
void handle_move(game_t *game);
size_t sizefile(char const *filepath);
static int word_len(char const *str, int k);
static int nb_words(char const *str);
static int alpha(char c);

void display_map(game_t *game);
void display_map1(game_t *game);
void display_map2(game_t *game);
void display_map3(game_t *game);
void display_map4(game_t *game);
void display_map5(game_t *game);
void display_map6(game_t *game);
void display_map7(game_t *game);
void display_map8(game_t *game);
void display_map9(game_t *game);
void display_map10(game_t *game);
void display_map11(game_t *game);
void display_map12(game_t *game);

void handle_map1(game_t *game);
void handle_map2(game_t *game);
void handle_map3(game_t *game);
void handle_map4(game_t *game);
void handle_map5(game_t *game);
void handle_map6(game_t *game);
void handle_map7(game_t *game);
void handle_map8(game_t *game);
void handle_map9(game_t *game);
void handle_map10(game_t *game);
void handle_map11(game_t *game);
void handle_map12(game_t *game);

void search_handle_map1(game_t *game);
void search_handle_map2(game_t *game);
void search_handle_map3(game_t *game);
void search_handle_map4(game_t *game);
void search_handle_map5(game_t *game);

void search_handle1(game_t *game);
void search_handle2(game_t *game);
void search_handle3(game_t *game);
void search_handle4(game_t *game);
void search_handle5(game_t *game);
#endif /* !FUNCTION_H_ */