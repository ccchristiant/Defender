/*
** EPITECH PROJECT, 2021
** i_scale_obj.c
** File description:
** i_scale_obj function
*/

#include "my_macros.h"
#include "struct.h"

sfVector2f scale_1(scenes_t *scn, int i)
{
    sfVector2f scale = {0, 0};

    if (scn->objs[i]->type == BACKGROUND) {
        scale.x = WIDTH / sfSprite_getLocalBounds(scn->objs[i]->spt).width;
        scale.y = HEIGHT / sfSprite_getLocalBounds(scn->objs[i]->spt).height;
    }
    if (scn->objs[i]->type == LIFEBAR) {
        scale.x = 1.25;
        scale.y = 1.25;
    }
    if (scn->objs[i]->type == MONSTBAR) {
        scale.x = 1.25;
        scale.y = 1.25;
    }
    if (scn->objs[i]->type == SPOT) {
        scale.x = 0.8;
        scale.y = 0.8;
    }
    return scale;
}

sfVector2f scale_2(scenes_t *scn, int i)
{
    sfVector2f scale = {0, 0};
    sfColor color = sfColor_fromRGBA(255, 255, 255, 75);
    if (scn->objs[i]->type == RANGE) {
        scale.x = 1.4;
        scale.y = 1.4;
        sfSprite_setColor(scn->objs[i]->spt, color);
    }
    if (scn->objs[i]->type == SM_ENEMY) {
        scale.x = 0.3;
        scale.y = 0.3;
    }
    if (scn->objs[i]->type == MD_ENEMY) {
        scale.x = 0.35;
        scale.y = 0.35;
    }
    if (scn->objs[i]->type == LG_ENEMY) {
        scale.x = 0.4;
        scale.y = 0.4;
    }
    return scale;
}

void i_scale_obj(scenes_t *scn)
{
    sfVector2f scale = {0, 0};

    for (int i = 0; i < scn->nb_obj; ++i) {
        scale.x = 1;
        scale.y = 1;
        scale = scale_1(scn, i);
        if (scale.x == 0 && scale.y == 0) {
            scale = scale_2(scn, i);
            if (scn->objs[i]->type == O_TOWER || scn->objs[i]->type == C_TOWER) {
                scale.x = 0.18;
                scale.y = 0.18;
            }
        }
        sfSprite_scale(scn->objs[i]->spt, scale);
    }
}