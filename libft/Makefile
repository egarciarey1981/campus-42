NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJ)
	ar crv $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -fv $(NAME)

re: fclean all