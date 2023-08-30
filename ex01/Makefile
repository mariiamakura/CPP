# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 11:28:32 by mparasku          #+#    #+#              #
#    Updated: 2023/08/30 13:34:37 by mparasku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FLAG = -std=c++98

SRC = main.cpp Phonebook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	c++ -Wall -Wextra -Werror $(FLAG) $(OBJ) -o $(NAME) 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -fr $(NAME)
