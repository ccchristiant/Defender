/*
** EPITECH PROJECT, 2021
** i_musics.c
** File description:
** i_musics function
*/

#include "struct.h"
#include "music_sound.h"

__attribute__ ((unused))static const char *SOUNDS[4];

void i_musics(global_t *core)
{
    for (int i = 0; i < 4; ++i) {
        core->musics[i].music = sfMusic_createFromFile(MUSICS[i]);
        sfMusic_setLoop(core->musics[i].music, sfTrue);
    }
    sfMusic_play(core->musics[0].music);
}