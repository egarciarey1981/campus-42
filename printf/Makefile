NAME = libftprintf.a

SRC = $(wildcard *.c filter-out $(SRC_BONUS))
OBJ = $(SRC:.c=.o)

%.o: %.c
	@cc -Wall -Werror -Wextra -c $<

$(NAME): $(OBJ)
	@ar cr $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
