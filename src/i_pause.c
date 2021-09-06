/*
** EPITECH PROJECT, 2021
** i_pause.c
** File description:
** i_pause function
*/

#include <stdlib.h>
#include "pause.h"

int i_pause(scenes_t *scn)
{
    scn->nb_obj = 1;
    scn->nb_button = 10;
    scn->objs = malloc(sizeof(game_obj*) * scn->nb_obj);
    scn->btts = malloc(sizeof(button_t) * scn->nb_button);
    if (!scn->objs || !scn->btts)
        return 0;
    for (int i = 0; i < scn->nb_obj; ++i)
        scn->objs[i] = obj(PS_O_F[i], PS_O_T[i], PS_O_P[i], PS_O_R[i]);
    i_scale_obj(scn);
    for (int j = 0; j < scn->nb_button; ++j) {
        i_button(&scn->btts[j], PS_B_F[j], PS_B_P[j], PS_B_S[j], PS_B_C[j]);
        i_button_color(&scn->btts[j]);
    }
    return 1;
}