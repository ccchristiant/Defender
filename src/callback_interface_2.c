/*
** EPITECH PROJECT, 2021
** callback_interface_2.c
** File description:
** callback_interface_2 functions
*/

#include "struct.h"

void over(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = OVER;
    if (sfMusic_getStatus(core->musics[0].music) == sfPlaying)
        sfMusic_stop(core->musics[0].music);
    if (sfMusic_getStatus(core->musics[1].music) == sfPlaying)
        sfMusic_stop(core->musics[1].music);
    if (sfMusic_getStatus(core->musics[2].music) == sfPlaying)
        sfMusic_stop(core->musics[2].music);
    if (sfMusic_getStatus(core->musics[3].music) == sfStopped)
        sfMusic_play(core->musics[3].music);
}

void end(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = END;
    if (sfMusic_getStatus(core->musics[0].music) == sfPlaying)
        sfMusic_stop(core->musics[0].music);
    if (sfMusic_getStatus(core->musics[1].music) == sfPlaying)
        sfMusic_stop(core->musics[1].music);
    if (sfMusic_getStatus(core->musics[3].music) == sfPlaying)
        sfMusic_stop(core->musics[3].music);
    if (sfMusic_getStatus(core->musics[2].music) == sfStopped)
        sfMusic_play(core->musics[2].music);
}

void simple_menu(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = MENU;
    if (sfMusic_getStatus(core->musics[1].music) == sfPlaying)
        sfMusic_stop(core->musics[1].music);
    if (sfMusic_getStatus(core->musics[2].music) == sfPlaying)
        sfMusic_stop(core->musics[2].music);
    if (sfMusic_getStatus(core->musics[3].music) == sfPlaying)
        sfMusic_stop(core->musics[3].music);
    if (sfMusic_getStatus(core->musics[0].music) == sfStopped)
        sfMusic_play(core->musics[0].music);
}

void music(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    float music;

    core->music_state = (core->music_state == 0);
    music = (float)core->music_state * 100.0;
    for (int i = 0; i < 4; ++i)
        sfMusic_setVolume(core->musics[i].music, music);
}

void sound(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    float sound;

    core->sound_state = (core->sound_state == 0);
    sound = (float)core->sound_state * 100.0;
    for (int i = 0; i < 4; ++i)
        sfSound_setVolume(core->sounds[i].sound, sound);
}