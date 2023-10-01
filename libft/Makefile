NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

%.o: %.c
	cc -Wall -Werror -Wextra -c $<

$(NAME): $(OBJ)
	ar crv $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -fv $(NAME)

re: fclean all