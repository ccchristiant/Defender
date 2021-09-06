/*
** EPITECH PROJECT, 2021
** inside_range.c
** File description:
** inside_range function
*/

#include "struct.h"

int inside_range(sfVector2f center, sfVector2f point, float radius)
{
    if ((point.x - center.x) * (point.x - center.x) +
        (point.y - center.y) * (point.y - center.y) <= radius * radius)
        return 1;
    else
        return 0;
}