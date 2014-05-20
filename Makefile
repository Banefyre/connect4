# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msagodir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/18 17:58:06 by msagodir          #+#    #+#              #
#    Updated: 2014/03/09 19:51:51 by msagodir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = puissance4
PATH_INC = ./incs
PATH_OBJ = ./objs
PATH_SRC = ./srcs
LIBDIR = libft
SRC =	main.c		\
		play.c		\
		player.c	\
		tools.c		\
		ai.c
OBJ = $(patsubst %.c, $(PATH_OBJ)/%.o, $(SRC))

all : lib $(NAME)

lib:
	@make -C $(LIBDIR)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) -L$(LIBDIR) -lft $(OBJ)

$(PATH_OBJ)/%.o : $(addprefix $(PATH_SRC)/, %.c)
	mkdir -p $(PATH_OBJ)
	$(CC) $(CFLAGS) -o $@ -c $^ -I $(PATH_INC) -I $(LIBDIR)/includes

clean :
	$(MAKE) -C $(LIBDIR) $@
	rm -rf $(OBJ)

fclean :
	$(MAKE) -C $(LIBDIR) $@
	rm -rf $(OBJ)
	rm -rf $(NAME)

re : fclean all

.PHONY: re, clean, fclean

