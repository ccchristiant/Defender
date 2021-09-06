/*
** EPITECH PROJECT, 2021
** init_obj_info.c
** File description:
** ctran
*/

#include "struct.h"

sfVector2f ps_sc(float x, float y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return pos;
}

sfIntRect rc(int top, int left, int width, int height)
{
    sfIntRect rect;

    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return rect;
}