##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## screensaver makefile
##

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)game_obj.c	\
		$(SRC_DIR)init_obj_info.c	\
		$(SRC_DIR)randomize.c	\
		$(SRC_DIR)i_core.c	\
		$(SRC_DIR)i_nums.c	\
		$(SRC_DIR)i_clocks.c	\
		$(SRC_DIR)i_circles.c	\
		$(SRC_DIR)i_texts.c	\
		$(SRC_DIR)i_musics.c	\
		$(SRC_DIR)i_sounds.c	\
		$(SRC_DIR)i_scenes.c	\
		$(SRC_DIR)i_menu.c	\
		$(SRC_DIR)i_help.c	\
		$(SRC_DIR)i_helpp.c	\
		$(SRC_DIR)i_over.c	\
		$(SRC_DIR)i_end.c	\
		$(SRC_DIR)i_settings.c	\
		$(SRC_DIR)i_game.c	\
		$(SRC_DIR)i_pause.c	\
		$(SRC_DIR)i_pos_obj.c	\
		$(SRC_DIR)i_scale_obj.c	\
		$(SRC_DIR)i_monsters_data.c	\
		$(SRC_DIR)i_button_and_color.c	\
		$(SRC_DIR)i_towers_data.c	\
		$(SRC_DIR)defender.c	\
		$(SRC_DIR)event_handling.c	\
		$(SRC_DIR)update.c	\
		$(SRC_DIR)button_state.c	\
		$(SRC_DIR)objs_pos.c	\
		$(SRC_DIR)hold_tower.c	\
		$(SRC_DIR)set_tower.c	\
		$(SRC_DIR)nb_tower_occupied.c	\
		$(SRC_DIR)set_tower_1.c	\
		$(SRC_DIR)upd_clock.c	\
		$(SRC_DIR)upd_core_clocks.c	\
		$(SRC_DIR)upd_monster_clocks.c	\
		$(SRC_DIR)choose_monster_to_move.c	\
		$(SRC_DIR)monster_movements.c	\
		$(SRC_DIR)get_monst_data.c	\
		$(SRC_DIR)can_move.c	\
		$(SRC_DIR)remove_state.c	\
		$(SRC_DIR)towers_action.c	\
		$(SRC_DIR)inside_range.c	\
		$(SRC_DIR)closest_to_exit_in_range.c	\
		$(SRC_DIR)bounty.c	\
		$(SRC_DIR)towers_type_1_to_4.c	\
		$(SRC_DIR)tower_type_5.c	\
		$(SRC_DIR)money_from_time.c	\
		$(SRC_DIR)score_from_kills.c	\
		$(SRC_DIR)check_end_of_party.c	\
		$(SRC_DIR)move_rect.c	\
		$(SRC_DIR)move_monster.c	\
		$(SRC_DIR)horizontal.c	\
		$(SRC_DIR)vertical.c	\
		$(SRC_DIR)check_breach.c	\
		$(SRC_DIR)turn_part_1.c \
		$(SRC_DIR)turn_part_2.c \
		$(SRC_DIR)draw_scene.c	\
		$(SRC_DIR)draw_in_game_1.c	\
		$(SRC_DIR)draw_in_game_2.c	\
		$(SRC_DIR)draw_buttons_1.c	\
		$(SRC_DIR)display_cursor.c	\
		$(SRC_DIR)end.c	\
		$(SRC_DIR)callback_interface.c	\
		$(SRC_DIR)callback_interface_2.c	\
		$(SRC_DIR)callback_interface_3.c	\
		$(SRC_DIR)callback_b_tower.c	\
		$(SRC_DIR)callback_upgrade_sell.c	\

SRC_DIR = src/

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-Iinclude -I/usr/local/include

LDFLAGS	=	-Llib/my -L/usr/local/lib

LDLIBS	=	-lmy -lm -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS)

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
