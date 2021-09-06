/*
** EPITECH PROJECT, 2021
** i_scenes.c
** File description:
** i_scenes function
*/

#include "proto.h"

int i_scenes(scenes_t *scns)
{
    if (!i_menu(&scns[MENU]) || !i_settings(&scns[SETTINGS]) ||
        !i_help(&scns[HELP]) || !i_helpp(&scns[HELPP]) ||
        !i_game(&scns[GAME]) || !i_pause(&scns[PAUSE]) ||
        !i_end(&scns[END]) || !i_over(&scns[OVER]))
        return 0;
    return 1;
}