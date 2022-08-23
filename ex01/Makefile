# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhardt@students.42wolfsburg. +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 08:14:49 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/23 08:23:47 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRC =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: $(OBJ)
	$(CC) $(CFLAGS) -g $(OBJ) -o $(NAME)