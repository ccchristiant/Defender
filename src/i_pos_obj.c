/*
** EPITECH PROJECT, 2021
** i_pos_obj.c
** File description:
** i_pos_obj function
*/

#include "struct.h"

void i_pos_obj(scenes_t *scn)
{
    sfVector2f origin;
    float div = 1;

    for (int i = 0; i < scn->nb_obj; ++i) {
        div = (scn->objs[i]->type == RANGE) ? 2 : 1;
        if (scn->objs[i]->type == RANGE || scn->objs[i]->type == SM_ENEMY ||
            scn->objs[i]->type == MD_ENEMY || scn->objs[i]->type == LG_ENEMY) {
            origin.x = scn->objs[i]->rect.width / 2;
            origin.y = scn->objs[i]->rect.height / div;
            sfSprite_setOrigin(scn->objs[i]->spt, origin);
        }
        if (scn->objs[i]->type == LIFEBAR || scn->objs[i]->type == MONSTBAR ||
            scn->objs[i]->type == SPOT || scn->objs[i]->type == RANGE ||
            scn->objs[i]->type == SM_ENEMY || scn->objs[i]->type == MD_ENEMY ||
            scn->objs[i]->type == LG_ENEMY || scn->objs[i]->type == O_TOWER)
            sfSprite_setPosition(scn->objs[i]->spt, scn->objs[i]->pos);
    }
}