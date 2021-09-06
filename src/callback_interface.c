/*
** EPITECH PROJECT, 2021
** callback_interface.c
** File description:
** cb interface buttons
*/

#include "struct.h"

void play(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = GAME;
    if (sfMusic_getStatus(core->musics[0].music) == sfPlaying)
        sfMusic_stop(core->musics[0].music);
    if (sfMusic_getStatus(core->musics[2].music) == sfPlaying)
        sfMusic_stop(core->musics[2].music);
    if (sfMusic_getStatus(core->musics[3].music) == sfPlaying)
        sfMusic_stop(core->musics[3].music);
    if (sfMusic_getStatus(core->musics[1].music) == sfStopped)
        sfMusic_play(core->musics[1].music);
}

void close_win(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    sfRenderWindow_close(core->wn);
}

void settings(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = SETTINGS;
}

void help(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = HELP;
}

void helpp(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = HELPP;
}