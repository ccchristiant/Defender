/*
** EPITECH PROJECT, 2021
** display_cursor.c
** File description:
** display_cursor function
*/

#include "struct.h"

void display_cursor(global_t *core)
{
    sfVector2f cursor_coord = {core->c_move.x - 58, core->c_move.y - 58};

    sfSprite_setPosition(core->cursor_s, cursor_coord);
    sfRenderWindow_drawSprite(core->wn, core->cursor_s, NULL);
}