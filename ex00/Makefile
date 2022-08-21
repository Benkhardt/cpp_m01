# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 21:25:32 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/21 22:22:57 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = clang++

CFLAGS = -Wall -Werror -Wextra -g

SRC = 	main.cpp \
		Zombie.cpp \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
