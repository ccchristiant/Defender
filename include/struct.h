/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct header
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <stdarg.h>
#include "enum.h"

struct global_s;
struct scenes_s;

//WRAPPER
struct match_printf {
    char c;
    void (*function)(va_list list);
};

typedef struct match_printf c_f;

struct tower_action_s {
    int idx;
    void (*function)(struct global_s *core, struct scenes_s scene, int i);
};

typedef struct tower_action_s tower_action_t;

typedef void (*callback)(struct global_s *core, struct scenes_s *scene);

typedef struct button_s {
    sfSprite *spt;
    sfTexture *txt;
    callback function;
    sfColor idle;
    sfColor hover;
    sfColor press;
} button_t;

typedef struct game_object
{
    object_type type;
    sfSprite *spt;
    sfTexture *txt;
    sfVector2f pos;
    sfIntRect rect;
    float left_init;
    sfVector2f scale;
    int move;
    int health;
    sfInt32 clock_limiter_anim;
    sfInt32 clock_limiter_pos;
    int covered_dist;
    int states[4];
    sfColor idle;
    sfColor simple_damaged;
    sfColor slowed;
    sfColor frozen;
    sfColor double_damaged;
    sfClock *m_anim_clock;
    sfTime m_anim_time;
    sfInt32 m_anim_seconds;
    sfClock *m_pos_clock;
    sfTime m_pos_time;
    sfInt32 m_pos_seconds;
    sfClock *m_simple_damage_clock;
    sfTime m_simple_damage_time;
    float m_simple_damage_seconds;
    sfClock *m_slow_clock;
    sfTime m_slow_time;
    float m_slow_seconds;
    sfClock *m_freeze_clock;
    sfTime m_freeze_time;
    float m_freeze_seconds;
    sfClock *m_double_damage_clock;
    sfTime m_double_damage_time;
    float m_double_damage_seconds;
    float freeze_cooldown;
    float money_cooldown;
} game_obj;

typedef struct scenes_s {
    game_obj **objs;
    button_t *btts;
    int nb_obj;
    int nb_button;
} scenes_t;

typedef struct clock_s {
    sfClock *clock;
    sfTime time;
    float seconds;
} clock_t1;

typedef struct music_s {
    sfMusic *music;
} music_t;

typedef struct sound_and_soundbuffer {
    sfSound *sound;
    sfSoundBuffer *buffer;
} s_a_b;

typedef struct global_s
{
    sfRenderWindow *wn;
    sfEvent evt;
    sfTexture *cursor_t;
    sfSprite *cursor_s;
    sfVector2f c_move;
    sfVector2f c_button;
    int music_state;
    int sound_state;
    int cur_scn;
    int life;
    int m_alive;
    int m_moved;
    int id_m_tab;
    int m_moved_tab[50];
    int money;
    int score;
    int pk_tow;
    int occ_spots[9];
    int up_tower[9];
    int nb_tower;
    int ck_tow;
    int idx_max;
    sfCircleShape *circles[9];
    sfClock *global_clock;
    sfTime global_time;
    float global_seconds;
    sfClock *money_clock;
    sfTime money_time;
    float money_seconds;
    sfClock *score_clock;
    sfTime score_time;
    float score_seconds;
    sfClock *frequency_clock;
    sfTime frequency_time;
    float frequency_seconds;
    clock_t1 tower_clocks[9];
    sfFont *font;
    sfText *text_money;
    sfText *text_score;
    music_t musics[4];
    s_a_b sounds[4];
} global_t;

#endif