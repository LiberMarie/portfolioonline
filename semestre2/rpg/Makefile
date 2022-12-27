##
## EPITECH PROJECT, 2021
## rpg
## File description:
## Makefile
##

SRC =	./src/anim_player.c \
		./src/anim_tears.c  \
		./src/change_map.c \
		./src/fill_up_game.c \
		./src/handle_map.c \
		./src/handle_map2.c \
		./src/handle_map3.c \
		./src/handle_map4.c \
		./src/handle_move.c \
		./src/str_to_word_array.c \
		./src/main.c \
		./src/charge_map.c \
		./src/charge_two__map.c	\
		./src/charge_tree_map.c	\
		./src/search_handle_map.c \
		./src/search_handlechangemap.c \
		./src/init_sprite_menu_press.c \
		./src/init_sprite_menu.c \
		./src/menu.c \
		./src/game.c \
		./src/info.c \
		./src/sound.c \
		./src/display_menu_quit_press.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-I./include/ -g

LDFLAGS	=	-l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) *~
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.Phony: all clean fclean re