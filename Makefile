
NAME = directory

SRC = main.cpp PhoneBook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

GCC = clang++

FLAG = -Wall -Wextra -Werror -I. -std=c++98

all: $(NAME)

$(NAME):		$(OBJ)
				$(GCC) $(FLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean   
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re