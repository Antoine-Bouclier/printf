.PHONY: all clean fclean re

NAME		= libftprintf.a
SRC_DIR		= src/
OBJ_DIR		= obj/
INCLUDE		= include
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror


SRC_FILES	= ft_printf.c ft_print_utils.c ft_print_nbr.c

SRC			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(OBJ_FILES)))

all:		$(NAME)

$(NAME):	$(OBJS)
					ar -rcs $(NAME) $(OBJS)
	
$(OBJ_DIR)%.o: 		$(SRC_DIR)%.c ft_printf.h
					$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
					rm -rf $(OBJ_DIR)

fclean: 
					$(MAKE) clean

re:
					$(MAKE) fclean 
					$(MAKE) all