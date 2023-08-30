# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 13:34:39 by mparasku          #+#    #+#              #
#    Updated: 2023/08/30 13:35:03 by mparasku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
FLAG = -std=c++98

SRC = tests.cpp Account.cpp
#HEADER = main.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	c++ -Wall -Wextra -Werror $(FLAG) $(OBJ) -o $(NAME) 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -fr $(NAME)
