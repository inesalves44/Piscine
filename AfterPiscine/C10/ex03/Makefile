CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = ft_hexdump
OBJ = ft_hexdump.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
