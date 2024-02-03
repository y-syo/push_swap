/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:27:49 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 23:17:18 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_head	head;

	if (argc < 2)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	head.stack_a = fill_struct(argc - 1, &argv[1]);
	head.stack_b = NULL;
	if (!head.stack_a)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	replace_nb_init(head.stack_a);
	ft_printf("%S\n", head.stack_a);
	if (!is_sorted(head.stack_a))
		sort(&head);
	ft_printf("%S\n", head.stack_a);
	ft_free("s", &head.stack_a);
	return (0);
}
