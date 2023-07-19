NAME = libft.a
FLAGS = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(OPTION) $(SRC) -I .
		ar rc $(NAME) *.o
bonus:
		gcc $(FLAGS) $(OPTION) $(BONUS) -I .
		ar rc $(NAME) *.o
clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all
