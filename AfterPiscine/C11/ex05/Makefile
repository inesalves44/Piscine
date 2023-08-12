INC = includes/ft.h
OBJ = src/do-op.o src/calc.o src/op.o
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = do_op

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
