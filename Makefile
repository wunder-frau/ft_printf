SRCS = ft_printf.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_put_hex_low.c \
	   ft_put_hex_up.c \
	   ft_put_ptr.c \
	   ft_put_unsigned.c \
	   ft_put_digit.c 

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

test: all
	$(CC) $(CFLAGS) mains/main.c $(NAME)

testclean: fclean
	rm -rf a.out

.PHONY: all clean fclean re test testclean
