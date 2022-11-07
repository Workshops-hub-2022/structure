##
## EPITECH PROJECT, 2022
## pts-function
## File description:
## main
##

NAME	=	structure

FOLDER	=	src/

SRCS	=	$(FOLDER)main.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wall -Wextra -W -Iinclude

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