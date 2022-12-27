/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** change_map
*/

#include "../include/function.h"

void display_map(game_t *game)
{
    game->one.texture = sfTexture_createFromFile("assets/map/spawn.png", NULL);
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->map = str_to_word_array(file_to_str("assets/map/spawn.txt"));
    game->boolean = 0;
    game->perso.pos.x = 928;
    game->perso.pos.y = 924;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 57;
    game->y = 57;
    game->boolean_map = 0;
}

void display_map2(game_t *game)
{
    game->one.texture = sfTexture_createFromFile("assets/map/map1.png", NULL);
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean = 0;
    game->map = str_to_word_array(file_to_str("assets/map/map1.txt"));
    game->boolean_map = 1;
    game->perso.pos.x = 928;
    game->perso.pos.y = 76;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 4;
    game->y = 57;
}

void display_map3(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map1.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map1.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 1792;
    game->perso.pos.y = 508;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 31;
    game->y = 112;
}

void display_map4(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map2.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map2.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 64;
    game->perso.pos.y = 508;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 31;
    game->y = 4;
}

void display_map5(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map2.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map2.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 1792;
    game->perso.pos.y = 508;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 31;
    game->y = 112;
}