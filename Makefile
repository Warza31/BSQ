##
## EPITECH PROJECT, 2017
## make
## File description:
## make
##

SRC	=	./lib/my/my_putchar.c	\
		./lib/my/my_getnbr.c	\
		./lib/my/my_strlen.c	\
		./src/square.c		\
		./src/main.c		\
		./src/bsq.c		\
		./src/copy.c		\
		./src/display.c		\
		./src/get_info.c



OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-W -Wall -Wextra -pedantic -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(CFLAGS)
clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f 	$(NAME)

re:	fclean all
