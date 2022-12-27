/*
** EPITECH PROJECT, 2021
** tristant
** File description:
** change_map
*/

#include "../include/function.h"

void display_map6(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map3.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map3.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 64;
    game->perso.pos.y = 508;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 31;
    game->y = 4;
}

void display_map7(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map3.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map3.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 1792;
    game->perso.pos.y = 508;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 31;
    game->y = 112;
}

void display_map8(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map4.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map4.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 928;
    game->perso.pos.y = 924;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 57;
    game->y = 57;
}

void display_map9(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map4.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map4.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 928;
    game->perso.pos.y = 76;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 4;
    game->y = 57;
}

void display_map10(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map5.png", NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map5.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 824;
    game->perso.pos.y = 928;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 57;
    game->y = 57;
}