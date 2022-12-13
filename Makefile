NAME= libftprintf.a
HEADER= libftprintf.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f

SRC= ft_formulas.c\
	ft_printf.c

OBJS= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
