# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 04:08:18 by mmoussou          #+#    #+#              #
#    Updated: 2024/01/16 21:07:29 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc verif_all.c src/push_swap.c -I include -I libft/include src/t_stack/* libft/src/str/XtoX/ft_atol.c libft/src/str/XtoX/ft_atoi.c libft/src/str/ft_split.c libft/src/mem/ft_calloc.c libft/src/mem/ft_bzero.c libft/src/mem/ft_memset.c -g
