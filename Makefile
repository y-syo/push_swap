# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 04:08:18 by mmoussou          #+#    #+#              #
#    Updated: 2024/01/18 01:21:29 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc src/* -I include -I libft/include libft/src/str/XtoX/* libft/src/str/*.c libft/src/mem/* libft/src/stack/* libft/src/io/* -g
