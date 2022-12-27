/*
** EPITECH PROJECT, 2021
** undefined
** File description:
** main
*/

#include "function.h"

size_t sizefile(char const *filepath)
{
    struct stat st;

    if (stat(filepath, &st) != 0)
        return (0);
    return (st.st_size);
}

char *file_to_str(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *str = malloc(sizefile(filepath) + 1);

    read(fd, str, sizefile(filepath));
    str[sizefile(filepath)] = '\0';
    close(fd);
    return (str);
}

void init_map_start(game_t *game)
{
    game->boolean = 0;
    game->one.texture = sfTexture_createFromFile("assets/map/map1.png",
    NULL);
    game->map = str_to_word_array(file_to_str("assets/map/map1.txt"));
    sfSprite_setTexture(game->one.sprite, game->one.texture, sfTrue);
    game->boolean_map = 1;
    game->perso.pos.x = 1792;
    game->perso.pos.y = 508;
    sfSprite_setPosition(game->perso.sprite, game->perso.pos);
    game->x = 31;
    game->y = 112;
}

int game_play(void)
{
    game_t *game = malloc(sizeof(game_t));
    if (game->count_map == 2 && game->boolean_map == 1 && game->boolean == 1)
        init_map_start(game);
    fill_up_game_t(game);
    while (sfRenderWindow_isOpen(game->window) && game->end == 0) {
        while (game->load.open == 1 && my_load(game) == 0);
        sfRenderWindow_drawSprite(game->window, game->one.sprite, NULL);
        sfRenderWindow_drawSprite(game->window, game->perso.sprite, NULL);
        while (sfRenderWindow_pollEvent(game->window, &game->event)) {
            if (game->event.type == sfEvtClosed)
                sfRenderWindow_close(game->window);
            handle_move(game);
            handle_map(game);
        }
        handle_change_map(game);
        sfRenderWindow_display(game->window);
    }
}