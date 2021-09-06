/*
** EPITECH PROJECT, 2021
** turn_part_2.c
** File description:
** turn_part_2 function
*/

#include "struct.h"
#include "game.h"

__attribute__ ((unused))static const char *GM_O_F[221];

__attribute__ ((unused))static const char *GM_B_F[9];

void turn_6(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y >= 220 + offsets[2] &&
        scn.objs[idx]->pos.y <= 320 + offsets[2] &&
        scn.objs[idx]->pos.x <= 385 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 285 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[5]; i > (int)GM_CIRC_PT_CT[5] / 4 * 3; --i) {
            point_f = sfCircleShape_getPoint(core->circles[5], i);
            point_f.x += sfCircleShape_getPosition(core->circles[5]).x - 195 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[5]).y - 75 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[5], i - 1);
                point_f.x += sfCircleShape_getPosition(core->circles[5]).x - 195 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[5]).y - 75 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}

void turn_7(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y >= 365 + offsets[2] &&
        scn.objs[idx]->pos.y <= 485 + offsets[2] &&
        scn.objs[idx]->pos.x <= 285 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 165 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[6] / 4; i < (int)GM_CIRC_PT_CT[6] / 4 * 2; ++i) {
            point_f = sfCircleShape_getPoint(core->circles[6], i);
            point_f.x += sfCircleShape_getPosition(core->circles[6]).x - 215 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[6]).y - 85 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[6], i + 1);
                point_f.x += sfCircleShape_getPosition(core->circles[6]).x - 215 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[6]).y - 85 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}

void turn_8(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y >= 485 + offsets[2] &&
        scn.objs[idx]->pos.y <= 765 + offsets[2] &&
        scn.objs[idx]->pos.x <= 145 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 5 + offsets[0] + offsets[1]) {
        scn.objs[idx]->pos.x = (scn.objs[idx]->type == LG_ENEMY && scn.objs[idx]->pos.x < 100 && scn.objs[idx]->pos.y == 490) ? 100 : scn.objs[idx]->pos.x;
        for (int i = GM_CIRC_PT_CT[7]; i > (int)GM_CIRC_PT_CT[7] / 4 * 2; --i) {
            point_f = sfCircleShape_getPoint(core->circles[7], i);
            point_f.x += sfCircleShape_getPosition(core->circles[7]).x - 235 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[7]).y - 120 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[7], i - 1);
                point_f.x += sfCircleShape_getPosition(core->circles[7]).x - 235 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[7]).y - 120 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                if (i == (int)GM_CIRC_PT_CT[7] / 4 * 3)
                    if (scn.objs[idx]->rect.left != 0 && scn.objs[idx]->rect.width < 0) {
                        scn.objs[idx]->rect.left = 0;
                        scn.objs[idx]->rect.width *= -1;
                    }
                break;
            }
        }
    }
}

void turn_9(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y >= 765 + offsets[2] &&
        scn.objs[idx]->pos.y <= 885 + offsets[2] &&
        scn.objs[idx]->pos.x >= 365 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x <= 485 + offsets[0] + offsets[1]) {
        for (int i = 0; i < (int)GM_CIRC_PT_CT[8] / 4; ++i) {
            point_f = sfCircleShape_getPoint(core->circles[8], i);
            point_f.x += sfCircleShape_getPosition(core->circles[8]).x - 220 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[8]).y - 105 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[8], i + 1);
                point_f.x += sfCircleShape_getPosition(core->circles[8]).x - 220 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[8]).y - 105 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}