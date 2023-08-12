NAME = ft_cat
CC = gcc
FLAGS = -Wall -Werror -Wextra
OBJ = ft_cat.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
