##
## EPITECH PROJECT, 2022
## pts-function
## File description:
## main
##

NAME	=	structure

FOLDER	=	src/

SRCS	=	$(FOLDER)main.c \
			$(FOLDER)warrior.c \
			$(FOLDER)my_str.c \
			$(FOLDER)arena.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra -W -Iinclude -g3

CC		=	gcc

RM     =	rm -f

all    :	$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) -lm

clean  :	
		$(RM) $(NAME)

fclean :	clean
			$(RM) $(OBJS)
			rm -f *~

re     :	fclean all

.PHONY :	all clean fclean re