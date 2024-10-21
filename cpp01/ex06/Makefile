# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 13:56:39 by ncampbel          #+#    #+#              #
#    Updated: 2024/09/26 20:59:25 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= harl

CC= c++

CFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC= main.cpp Harl.cpp

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: