# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 07:21:18 by mmoussou          #+#    #+#              #
#    Updated: 2024/02/03 23:10:10 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = bash

CC = gcc

LIBFT_DIR = ./libft

LIBFT = $(LIBFT_DIR)/libft.a

LIBFT_INCLUDE = $(LIBFT_DIR)/include

CFLAGS = -Wall -Werror -Wextra -g

INCLUDE = ./include

NAME = push_swap

#find -type f -name "*.c" | sed "s/\.\///g" | xargs -Iname echo "`printf '\t\t\t'`" name "\\"
SRCS =                   src/fill_struct.c \
                         src/verif_nb.c \
                         src/replace_nb_init.c \
                         src/operations/push.c \
                         src/operations/swap.c \
                         src/operations/reverse_rotate.c \
                         src/operations/rotate.c \
                         src/is_sorted.c \
                         src/main.c \
                         src/uwu_sort/main_sort.c \
                         src/verif_double.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(LIBFT_DIR):
	@git clone https://github.com/y-syo/libft $(LIBFT_DIR)
	@printf " \x1B[1;34m[  ]\x1B[0m Cloned libft.\n"

$(LIBFT): $(LIBFT_DIR)
	@make -s -C $(LIBFT_DIR)

%.o: %.c
	@printf "\x1B[2K\r \x1B[1;32m[ 󱌣 ]\x1B[0m Compiling Objects... : $<"
	@$(CC) $(CFLAGS) -I$(INCLUDE) -I$(LIBFT_INCLUDE) $< -c -o $@

$(NAME): $(LIBFT) $(OBJS)
	@printf "\x1B[2K\r \x1B[1;32m[ 󱌣 ]\x1B[0m Objects Compiled."
	@printf "\n \x1B[1;33m[ 󱉟 ]\x1B[0m Compiling $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -I$(INCLUDE) -I$(LIBFT_INCLUDE) -o $(NAME)
	@printf "\x1B[2K\r \x1B[1;33m[ 󱉟 ]\x1B[0m $(NAME) Compiled.\n"

clean:
	@make -s -C $(LIBFT_DIR) clean
	@rm -f $(OBJS)
	@printf " \x1B[1;31m[  ]\x1B[0m Deleted Objects.\n"

fclean: clean
	@make -s -C $(LIBFT_DIR) fclean
	@rm -f $(NAME)
	@printf " \x1B[1;31m[  ]\x1B[0m Deleted $(NAME).\n"

re: fclean all

.PHONY: all server client clean fclean re
