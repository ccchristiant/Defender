/*
** EPITECH PROJECT, 2021
** game_obj.c
** File description:
** ctran
*/

#include <stdlib.h>
#include "struct.h"

game_obj *obj(const char *path_to_sptsheet, object_type o_type,
              sfVector2f pos, sfIntRect rect)
{
    game_obj *obj = malloc(sizeof(game_obj));

    if (!obj)
        return NULL;
    obj->type = o_type;
    obj->spt = sfSprite_create();
    obj->txt = sfTexture_createFromFile(path_to_sptsheet, NULL);
    if (!obj->txt)
        return NULL;
    obj->pos = pos;
    obj->rect = rect;
    obj->left_init = rect.left;
    sfTexture_setSmooth(obj->txt, sfTrue);
    sfSprite_setTexture(obj->spt, obj->txt, sfTrue);
    return obj;
}