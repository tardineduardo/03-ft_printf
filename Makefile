SRCS =	ft_printf.c \
		ft_putchr_fd_printf.c \
		ft_putstr_fd_printf.c \
		ft_putnbr_fd_printf.c \
		ft_putuns_fd_printf.c \
		ft_countput_str.c \
		ft_countput_chr.c \
		ft_countput_ptr.c \
		ft_countput_int.c \
		ft_countput_uns.c \
		ft_countput_hex_l.c \
		ft_countput_hex_u.c \

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rfc $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
