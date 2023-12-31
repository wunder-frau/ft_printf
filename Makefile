SRCS = ft_printf.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_put_unumber.c \
	   ft_put_ptr.c \
	   ft_put_digit.c \
	   ft_put_percent.c

OBJ = $(SRCS:.c=.o)
NAME = libftprintf.a
LIBFT_DIR = libft
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a $@
	@ar -ruvcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
