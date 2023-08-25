NAME = megaphone
FLAG = -std=c++98

SRC = megaphone.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror $(FLAG) $(OBJ) -o $(NAME) 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -fr $(NAME)
