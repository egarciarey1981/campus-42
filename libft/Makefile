NAME = libft.a

SRC_BONUS = $(wildcard *_bonus.c)
OBJ_BONUS = $(SRC_BONUS:_bonus.c=_bonus.o)

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

bonus: $(OBJ_BONUS)
	@ar cr $(NAME) $(OBJ_BONUS)