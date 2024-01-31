/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:27:49 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/30 16:48:03 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc < 2)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	stack = fill_struct(argc - 1, &argv[1]);
	if (!stack)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	replace_nb_init(stack);
	ft_printf("%S\n", stack);
	ft_free("s", &stack);
	return (0);
}
