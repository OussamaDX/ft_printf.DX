SRCS =	ft_printf.c ft_putnbr.c ft_putchar.c \
          ft_putnbr_u.c ft_pointer.c ft_putnbr_base.c ft_putstr.c

NAME			= libftprintf.a

CC				= cc

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

AR				= ar rc

OBJS			= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
