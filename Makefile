##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/bisection.c	\
		src/torus.c	\
		src/secante.c	\
		src/newton.c	\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-Wshadow -I ./include

LIB	=	-lm

NAME	=	105torus

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)
	rm -f *.gcno *.gcda

fclean:	clean
	rm -f $(NAME)

re:	fclean all
