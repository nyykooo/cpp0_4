# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 10:39:21 by ncampbel          #+#    #+#              #
#    Updated: 2024/10/31 15:04:32 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= zombie

CC= c++

CFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re