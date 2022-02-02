##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC 	=	main.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-g -W -Wall -Wextra -Werror

NAME	=	func_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
