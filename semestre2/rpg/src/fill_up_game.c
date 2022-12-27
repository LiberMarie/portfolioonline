/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** fill_up_game
*/

#include "../include/function.h"

perso_t perso_init(char *path)
{
    perso_t perso;

    perso.clk.clock = sfClock_create();
    perso.pos.x = 960;
    perso.pos.y = 540;
    perso.rect.top = 0;
    perso.rect.left = 0;
    perso.rect.width = 67;
    perso.rect.height = 80;
    perso.sprite = sfSprite_create();
    perso.texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(perso.sprite, perso.texture, sfTrue);
    sfSprite_setPosition(perso.sprite, perso.pos);
    sfSprite_setTextureRect(perso.sprite, perso.rect);
    return (perso);
}

background_t background_init(char *path, int height, int y)
{
    background_t back;
    
    back.pos.x = 0;
    back.pos.y = y;
    back.rect.top = 0;
    back.rect.left = 0;
    back.rect.width = 1920;
    back.rect.height = height;
    back.sprite = sfSprite_create();
    back.texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(back.sprite, back.texture, sfTrue);
    sfSprite_setPosition(back.sprite, back.pos);
    sfSprite_setTextureRect(back.sprite, back.rect);
    return (back);
}

sfVideoMode init_buffer(void)
{
    sfVideoMode buffer;
    buffer.width = 1920;
    buffer.height = 1080;
    buffer.bitsPerPixel = 32;
    return (buffer);
}

void fill_up_game_t(game_t *game)
{
    game->buffer = init_buffer();
    game->window = sfRenderWindow_create(game->buffer, "Episaac", sfFullscreen,
    NULL);
    game->end = 0;
    game->load.clk.clock = sfClock_create();
    game->x = 33;
    game->y = 60;
    game->one = background_init("assets/map/spawn.png", game->buffer.height, 0);
    game->perso = perso_init("assets/player/spritesheet.png");
    game->map = str_to_word_array(file_to_str("assets/map/spawn.txt"));
    game->load.back = background_init("assets/loading_1.png",
    game->buffer.height, 0);
    game->load.tears = background_init("assets/loading_3.png", 0, 400);
    game->load.eyes = background_init("assets/loading_2.png",
    game->buffer.height, 0);
    game->load.open = 1;
    game->count_map = 0;
    game->boolean_map = 0;
    game->boolean = 0;
}