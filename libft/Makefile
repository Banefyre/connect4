# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 09:55:32 by msagodir          #+#    #+#              #
#    Updated: 2014/01/13 16:26:34 by msagodir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
FLAGSTEST = -L./ -lft
NAME = libft.a
SRC = ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memccpy.c		\
		ft_memmove.c		\
		ft_strlen.c			\
		ft_memchr.c			\
		ft_strdup.c			\
		ft_strcpy.c			\
		ft_strncpy.c		\
		ft_strcat.c			\
		ft_strncat.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strnstr.c		\
		ft_strcmp.c			\
		ft_strncmp.c		\
		ft_memcmp.c			\
		ft_strlcat.c		\
		ft_atoi.c			\
		ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_isalnum.c		\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_putendl.c		\
		ft_putnbr.c			\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_memalloc.c		\
		ft_memdel.c			\
		ft_strnew.c			\
		ft_strdel.c			\
		ft_strclr.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strequ.c			\
		ft_strnequ.c		\
		ft_strsub.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_strsplit.c		\
		ft_itoa.c			\
		get_next_line.c		\
		ft_strcatchr.c		\
		ft_lstnew.c			\
		ft_lstadd.c			\
		ft_lstaddend.c		\
		ft_lstgetitem.c		\
		ft_lstaddorcreate.c	\
		ft_realloc.c		\
		ft_tablen.c			\
		ft_strnclr.c		\
		ft_dllstadd_end.c	\
		ft_dllstnew.c		\
		ft_dllstdelitem.c	\
		ft_dllstgetitem.c	\
		ft_print_error.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) includes/libft.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) -c $(FLAGS) -I includes/ $^

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(EXEC) $(NAME)

re : fclean all

.PHONY: all, re, clean, fclean
