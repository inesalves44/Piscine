NAME = libft.a
SRC = srcs/ft_str.c srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCS = includes
OBJ = ft_str.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(INCS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
