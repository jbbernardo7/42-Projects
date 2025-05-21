NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror
FILES = ft_printf.c

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc -c $(CFLAGS) $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS) $(BOBJS)

re: fclean all

.PHONY: all clean fclean re
