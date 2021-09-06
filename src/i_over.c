/*
** EPITECH PROJECT, 2021
** i_over.c
** File description:
** i_over function
*/

#include <stdlib.h>
#include "over.h"

int i_over(scenes_t *scn)
{
    scn->nb_obj = 1;
    scn->nb_button = 7;
    scn->objs = malloc(sizeof(game_obj*) * scn->nb_obj);
    scn->btts = malloc(sizeof(button_t) * scn->nb_button);
    if (!scn->objs || !scn->btts)
        return 0;
    for (int i = 0; i < scn->nb_obj; ++i)
        scn->objs[i] = obj(OV_O_F[i], OV_O_T[i], OV_O_P[i], OV_O_R[i]);
    i_scale_obj(scn);
    for (int j = 0; j < scn->nb_button; ++j) {
        i_button(&scn->btts[j], OV_B_F[j], OV_B_P[j], OV_B_S[j], OV_B_C[j]);
        i_button_color(&scn->btts[j]);
    }
    return 1;
}