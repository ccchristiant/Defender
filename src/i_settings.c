/*
** EPITECH PROJECT, 2021
** i_settings.c
** File description:
** i_settings function
*/

#include <stdlib.h>
#include "settings.h"

int i_settings(scenes_t *scn)
{
    scn->nb_obj = 1;
    scn->nb_button = 8;
    scn->objs = malloc(sizeof(game_obj*) * scn->nb_obj);
    scn->btts = malloc(sizeof(button_t) * scn->nb_button);
    if (!scn->objs || !scn->btts)
        return 0;
    for (int i = 0; i < scn->nb_obj; ++i)
        scn->objs[i] = obj(ST_O_F[i], ST_O_T[i], ST_O_P[i], ST_O_R[i]);
    i_scale_obj(scn);
    for (int j = 0; j < scn->nb_button; ++j) {
        i_button(&scn->btts[j], ST_B_F[j], ST_B_P[j], ST_B_S[j], ST_B_C[j]);
        i_button_color(&scn->btts[j]);
    }
    return 1;
}