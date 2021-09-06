/*
** EPITECH PROJECT, 2021
** turn_part_1.c
** File description:
** turn_part_1 function
*/

#include "struct.h"
#include "game.h"

__attribute__ ((unused))static const char *GM_O_F[221];

__attribute__ ((unused))static const char *GM_B_F[9];

void turn_1(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y <= 695 + offsets[2] &&
        scn.objs[idx]->pos.y >= 575 + offsets[2] &&
        scn.objs[idx]->pos.x <= 1455 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 1335 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[0] / 4 * 2; i < (int)GM_CIRC_PT_CT[0] / 4 * 3; ++i) {
            point_f = sfCircleShape_getPoint(core->circles[0], i);
            point_f.x += sfCircleShape_getPosition(core->circles[0]).x - 220 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[0]).y - 85 + offsets[2];
            if (scn.objs[idx]->pos.x == point_f.x && scn.objs[idx]->pos.y == point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[0], i + 1);
                point_f.x = point_f.x + sfCircleShape_getPosition(core->circles[0]).x - 220 + offsets[0] + offsets[1];
                point_f.y = point_f.y + sfCircleShape_getPosition(core->circles[0]).y - 85 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}

void turn_2(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y <= 530 + offsets[2] &&
        scn.objs[idx]->pos.y >= 430 + offsets[2] &&
        scn.objs[idx]->pos.x <= 1335 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 1235 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[1] / 4; i > 0; --i) {
            point_f = sfCircleShape_getPoint(core->circles[1], i);
            point_f.x += sfCircleShape_getPosition(core->circles[1]).x - 200 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[1]).y - 75 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[1], i - 1);
                point_f.x += sfCircleShape_getPosition(core->circles[1]).x - 200 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[1]).y - 75 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}

void turn_3(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y >= 430 + offsets[2] &&
        scn.objs[idx]->pos.y <= 530 + offsets[2] &&
        scn.objs[idx]->pos.x <= 1035 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 935 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[2]; i > (int)GM_CIRC_PT_CT[2] / 4 * 3; --i) {
            point_f = sfCircleShape_getPoint(core->circles[2], i);
            point_f.x += sfCircleShape_getPosition(core->circles[2]).x - 200 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[2]).y - 75 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[2], i - 1);
                point_f.x += sfCircleShape_getPosition(core->circles[2]).x - 200 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[2]).y - 75 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}

void turn_4(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y >= 555 + offsets[2] &&
        scn.objs[idx]->pos.y <= 695 + offsets[2] &&
        scn.objs[idx]->pos.x <= 935 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 655 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[3] / 4; i < (int)GM_CIRC_PT_CT[3] / 4 * 3; ++i) {
            point_f = sfCircleShape_getPoint(core->circles[3], i);
            point_f.x += sfCircleShape_getPosition(core->circles[3]).x - 235 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[3]).y - 110 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[3], i + 1);
                point_f.x += sfCircleShape_getPosition(core->circles[3]).x - 235 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[3]).y - 110 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}

void turn_5(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    sfVector2f point_f;

    if (scn.objs[idx]->pos.y <= 320 + offsets[2] &&
        scn.objs[idx]->pos.y >= 220 + offsets[2] &&
        scn.objs[idx]->pos.x <= 655 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x >= 555 + offsets[0] + offsets[1]) {
        for (int i = GM_CIRC_PT_CT[4] / 4; i > 0; --i) {
            point_f = sfCircleShape_getPoint(core->circles[4], i);
            point_f.x += sfCircleShape_getPosition(core->circles[4]).x - 200 + offsets[0] + offsets[1];
            point_f.y += sfCircleShape_getPosition(core->circles[4]).y - 75 + offsets[2];
            if (scn.objs[idx]->pos.x == (float)point_f.x && scn.objs[idx]->pos.y == (float)point_f.y) {
                point_f = sfCircleShape_getPoint(core->circles[4], i - 1);
                point_f.x += sfCircleShape_getPosition(core->circles[4]).x - 200 + offsets[0] + offsets[1];
                point_f.y += sfCircleShape_getPosition(core->circles[4]).y - 75 + offsets[2];
                scn.objs[idx]->pos.x = (float)point_f.x;
                scn.objs[idx]->pos.y = (float)point_f.y;
                break;
            }
        }
    }
}