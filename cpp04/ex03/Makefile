# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 10:39:21 by ncampbel          #+#    #+#              #
#    Updated: 2024/11/21 23:47:56 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Interface

CXX= c++

CXXFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC_DIR = main AMateria Character Cure Ice MateriaSource

SRC = $(addsuffix .cpp, $(addprefix src/, $(SRC_DIR)))

OBJ_DIR = obj

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rfd $(OBJ_DIR)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
