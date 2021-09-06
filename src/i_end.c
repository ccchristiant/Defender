/*
** EPITECH PROJECT, 2021
** i_end.c
** File description:
** i_end function
*/

#include <stdlib.h>
#include "end.h"

int i_end(scenes_t *scn)
{
    scn->nb_obj = 1;
    scn->nb_button = 7;
    scn->objs = malloc(sizeof(game_obj*) * scn->nb_obj);
    scn->btts = malloc(sizeof(button_t) * scn->nb_button);
    if (!scn->objs || !scn->btts)
        return 0;
    for (int i = 0; i < scn->nb_obj; ++i)
        scn->objs[i] = obj(EN_O_F[i], EN_O_T[i], EN_O_P[i], EN_O_R[i]);
    i_scale_obj(scn);
    for (int j = 0; j < scn->nb_button; ++j) {
        i_button(&scn->btts[j], EN_B_F[j], EN_B_P[j], EN_B_S[j], EN_B_C[j]);
        i_button_color(&scn->btts[j]);
    }
    return 1;
}