/*
** EPITECH PROJECT, 2021
** proto.h
** File description:
** proto header
*/

#ifndef PROTO_H_
#define PROTO_H_

#include "struct.h"
#include <stdlib.h>

game_obj *obj(const char *path_to_spritesheet, object_type o_type,
              sfVector2f pos, sfIntRect rect);
sfVector2f ps_sc(float x, float y);
sfIntRect rc(int top, int left, int width, int height);
int randomize(void);
int i_core(global_t *core);
void i_nums(global_t *core);
void i_clocks(global_t *core);
void i_circles(global_t *core);
void i_texts(global_t *core);
void i_musics(global_t *core);
void i_sounds(global_t *core);
int i_scenes(scenes_t *scns);
int i_menu(scenes_t *scn);
int i_settings(scenes_t *scn);
int i_game(scenes_t *scn);
int i_help(scenes_t *scn);
int i_helpp(scenes_t *scn);
int i_over(scenes_t *scn);
int i_end(scenes_t *scn);
int i_pause(scenes_t *scn);
void i_pos_obj(scenes_t *scn);
void i_scale_obj(scenes_t *scn);
void i_monsters_data(scenes_t *scn);
void i_towers_data(scenes_t *scn);
int i_button(button_t *button, char const *path, sfVector2f pos,
             sfVector2f scale, void(*callback)());
void i_button_color(button_t *button);
int defender(void);
void event_handling(global_t *core, scenes_t *scns);
void update(global_t *core, scenes_t *scns);
void button_state(global_t *core, scenes_t *scns);
void objs_pos(global_t *core, scenes_t scn);
void hold_tower(global_t *core, scenes_t scn);
void set_tower(global_t *core, scenes_t scn);
void nb_tower_occupied(global_t *core);
void set_tower_1(global_t *core, scenes_t scn);
void upd_clock(global_t *core, scenes_t scn);
void upd_core_clocks(global_t *core);
void upd_monster_clocks(scenes_t scn);
void choose_monster_to_move(global_t *core, scenes_t scn);
void all_monster_movements(global_t *core, scenes_t scn);
int get_shift(scenes_t scn, int i);
int get_max(scenes_t scn, int i);
sfInt32 get_clock_limiter_anim(scenes_t scn, int i);
sfInt32 get_clock_limiter_pos(scenes_t scn, int i);
void can_move(global_t *core, scenes_t scn, int i);
void remove_sp_dmged(scenes_t scn, int i);
void remove_slowed(scenes_t scn, int i);
void remove_frozen(scenes_t scn, int i);
void remove_db_dmged(scenes_t scn, int i);
void towers_action(global_t *core, scenes_t scn);
int inside_range(sfVector2f center, sfVector2f point, float radius);
int closest_to_exit_in_range(global_t *core, scenes_t scn, int i, state_type state);
void tower_simple_damage(global_t *core, scenes_t scn, int i);
void tower_slow(global_t *core, scenes_t scn, int i);
void tower_freeze(global_t *core, scenes_t scn, int i);
void tower_money(global_t *core, __attribute__ ((unused))scenes_t scn, int i);
void tower_double_damage_1(global_t *core, scenes_t scn, int i);
void tower_double_damage_2(global_t *core, scenes_t scn, int i);
void bounty(global_t *core, scenes_t scn, int i_max);
void money_from_time(global_t *core);
void score_from_kills(global_t *core);
void check_end_of_party(global_t *core, scenes_t scn);
void move_rect(sfIntRect *rect, int offset, int max_value, float left_init);
void move_monster(global_t *core, scenes_t scn, int idx);
void horizontal_1(scenes_t scn, int idx, int offsets[3]);
void horizontal_2(scenes_t scn, int idx, int offsets[3]);
void horizontal_3(scenes_t scn, int idx, int offsets[3]);
void horizontal_4(scenes_t scn, int idx, int offsets[3]);
void horizontal_5(scenes_t scn, int idx, int offsets[3]);
void vertical_1(scenes_t scn, int idx, int offsets[3]);
void vertical_2(scenes_t scn, int idx, int offsets[3]);
void vertical_3(scenes_t scn, int idx, int offsets[3]);
void vertical_4(scenes_t scn, int idx, int offsets[3]);
void vertical_5(scenes_t scn, int idx, int offsets[3]);
void turn_1(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_2(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_3(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_4(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_5(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_6(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_7(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_8(global_t *core, scenes_t scn, int idx, int offsets[3]);
void turn_9(global_t *core, scenes_t scn, int idx, int offsets[3]);
void check_breach(global_t *core, scenes_t scn, int idx, int offsets[3]);
void draw_scene(global_t *core, scenes_t scn);
void draw_in_game(global_t *core, scenes_t scn, int *i);
void draw_range(global_t *core, scenes_t scn, int *i);
void draw_monsters(global_t *core, scenes_t scn, int *i);
void draw_towers(global_t *core, scenes_t scn, int *i);
void draw_bars(global_t *core, scenes_t scn, int *i);
void draw_c_tower(global_t *core, scenes_t scn, int *i);
void draw_music_sound_1(global_t *core, __attribute__ ((unused))scenes_t scn, int *j);
void draw_music_sound_2(global_t *core, __attribute__ ((unused))scenes_t scn, int *j);
void draw_upgrade_sell(global_t *core, scenes_t scn, int *j);
void display_cursor(global_t *core);
void end_core(global_t *core);
void end_scenes(scenes_t *scns);
void play(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void close_win(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void settings(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void simple_menu(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void music(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void help(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void helpp(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void over(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void end(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void sound(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void nothing(__attribute__ ((unused))global_t *core,
             __attribute__ ((unused))scenes_t *scenes);
void pause(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void restart(global_t *core, scenes_t *scenes);
void complex_menu(global_t *core, scenes_t *scenes);
void pick_tower_1(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void pick_tower_2(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void pick_tower_3(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void pick_tower_4(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void pick_tower_5(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void upgrade(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void sell(global_t *core, __attribute__ ((unused))scenes_t *scenes);
void sell_turret_1(global_t *core, __attribute__ ((unused))scenes_t *scns);
void sell_turret_2(global_t *core, __attribute__ ((unused))scenes_t *scns);
void sell_turret_3(global_t *core, __attribute__ ((unused))scenes_t *scns);
void sell_turret_4(global_t *core, __attribute__ ((unused))scenes_t *scns);
void sell_turret_5(global_t *core, __attribute__ ((unused))scenes_t *scns);

#endif