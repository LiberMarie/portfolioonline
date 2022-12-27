/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCY-2-1-myrpg-bilal.benlahcene
** File description:
** sound
*/

#include "function.h"

sound sound_set(sound sound, char *filesname)
{
    sound.sound = sfSound_create();
    sound.soundbuffer = sfSoundBuffer_createFromFile(filesname);

    sfSound_setBuffer(sound.sound, sound.soundbuffer);
    sfSound_play(sound.sound);
    return (sound);
}

sound change_music(sound sound, char *filesname)
{
    sound.soundbuffer = sfSoundBuffer_createFromFile(filesname);

    sfSound_setBuffer(sound.sound, sound.soundbuffer);
    sfSound_play(sound.sound);
}
