NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC = main.c parser.c parser_utils.c error.c disorder.c selector.c \
      swap.c push.c rotate.c reverse_rotate.c \
      simple.c medium.c complex.c adaptive.c \
      stack.c stack_utils.c

OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -I. -Ilibft -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C libft

re: fclean all

.PHONY: all clean fclean re