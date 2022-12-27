##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	main.c  			\



OBJ	=	$(SRC:.c=.o) \

NAME 	=	giantman

CFLAGS	=	-I./include/

LDFLAGS =	-Iinclude -Llib/my -lmy

all:	$(OBJ)
		$(MAKE) -C ./lib/my/
		$(CC) -g -o $(NAME) $(OBJ) ./lib/my/libmy.a $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) ./lib/my/*~
	$(MAKE) -C ./lib/my/ clean

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my/ fclean
	cd ./lib/ && rm libmy.a

re:	fclean all

lib/libmy.a:
	$(MAKE) -C ./lib/my/

.Phony: all clean fclean re