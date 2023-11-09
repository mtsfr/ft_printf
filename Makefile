SRC = ft_printf.c 
	ft_printchar.c \
	ft_printstr.c \
	ft_printptr.c \
	ft_printnbr.c \
	ft_printf.h

NAME = libftprintf.a
OBJ = $(SRC:.c=.o)
CC = cc
RM = rm -rf
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(ARC) $(NAME) $(OBJ)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
