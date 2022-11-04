
NAME	= libftprintf.a
SRCS=    ft_printf.c ft_putaddr.c ft_putchar.c ft_putnbr.c \
            ft_putnbr_base.c ft_putstr.c ft_putnbr_u.c

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
Footer
