/*
** EPITECH PROJECT, 2021
** i_sounds.c
** File description:
** i_sounds function
*/

#include "struct.h"
#include "music_sound.h"

__attribute__ ((unused))static const char *MUSICS[4];

void i_sounds(global_t *core)
{
    for (int i = 0; i < 4; ++i) {
        core->sounds[i].sound = sfSound_create();
        core->sounds[i].buffer = sfSoundBuffer_createFromFile(SOUNDS[i]);
        sfSound_setBuffer(core->sounds[i].sound, core->sounds[i].buffer);
    }
}