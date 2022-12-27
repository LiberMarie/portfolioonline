##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## 104intersection
##

SRCS =		main.c					\
			gest_error.c			\
			delta.c 				\
			intersection.c 			\
			to_struct.c 			\
			verif_lenght.c 			\
			verif_str_num.c 		\
			sphere.c 				\
			search_type_firstarg.c 	\
			cone.c 					\
			cylinder.c 				\

OBJS =		$(SRCS:.c=.o)

NAME =		104intersection

RM =		rm -f

CC =		gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -lm

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
