/*
** EPITECH PROJECT, 2021
** i_core.c
** File description:
** i_core function
*/

#include "proto.h"
#include "my_macros.h"

void *my_memset(void *s, int c, int n);

void i_all(global_t *core)
{
    i_nums(core);
    my_memset(core->m_moved_tab, -1, 4 * 50);
    my_memset(core->occ_spots, 0, 4 * 9);
    my_memset(core->up_tower, 0, 4 * 9);
    i_clocks(core);
    i_circles(core);
    i_texts(core);
    i_musics(core);
    i_sounds(core);
}

int i_core(global_t *core)
{
    sfVideoMode mode = {WIDTH, HEIGHT, 32};
    char *t = "My Defender";

    core->wn = sfRenderWindow_create(mode, t, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(core->wn, 60);
    sfRenderWindow_setMouseCursorVisible(core->wn, sfFalse);
    core->cursor_t = sfTexture_createFromFile("res/cursor.png", NULL);
    if (!core->cursor_t)
        return 0;
    core->cursor_s = sfSprite_create();
    sfSprite_setTexture(core->cursor_s, core->cursor_t, sfTrue);
    sfSprite_scale(core->cursor_s, (sfVector2f){0.3, 0.3});
    i_all(core);
    if (!randomize())
        return 0;
    return 1;
}