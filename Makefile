SRC = ft_printf.c \
	ft_printchar.c \
	ft_printstr.c \
	ft_printptr.c \
	ft_printnbr.c \
	ft_itoa.c \
	ft_utoa_base.c \
	ft_printhex.c \
	ft_printunsigned.c \
	ft_printf.h
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJS) a.out

fclean: clean
	$(RM) $(NAME)

RE: fclean name

cc: $(SRC)
	$(CC) $(CFLAGS) $(SRC)

.PHONY: all clean fclean
