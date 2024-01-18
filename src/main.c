/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:27:49 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/18 08:03:33 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	char	**split_args;

	if (argc < 2)
		return (-1);
	stack = fill_struct(argc - 1, argv);
	replace_nb_init(stack);
	ft_printf("%S yo", stack);
	return (0);
}
