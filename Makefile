.PHONY: all clean fclean re

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror


SRC_FILES	= ft_printf.c ft_print_utils.c ft_print_nbr.c ft_print_ptr.c

OBJS = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	
%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: 
	$(MAKE) clean
	rm -rf $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all