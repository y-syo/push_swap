/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:27:49 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/07 23:52:04 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_on_error(const char *context)
{
	char	*error_msg;

	if (!ft_strcmp(context, "args"))
		error_msg = "Invalid arguments\nusage: push_swap <values to sort>";
	else if (!ft_strcmp(context, "stack"))
		error_msg = "Invalid Arguments/Memory error, try again.";
	else if (!ft_strcmp(context, "sort"))
		error_msg = "Error during sorting, can't keep up, sorry.";
	ft_printf_fd(2, "Error: %s\n", error_msg);
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	t_head	head;

	if (argc < 2)
		exit_on_error("args");
	head.stack_a = fill_struct(argc - 1, &argv[1]);
	head.stack_b = NULL;
	if (!head.stack_a)
		exit_on_error("stack");
	replace_nb_init(head.stack_a);
	ft_printf("%S\n", head.stack_a);
	if (!is_sorted(head.stack_a))
	{
		if (sort(&head))
		{
			ft_free("s", &head.stack_a);
			exit_on_error("sort");
		}
	}
	ft_printf("%S\n", head.stack_a);
	ft_printf("%S\n", head.stack_b);
	ft_free("s", &head.stack_a);
	return (0);
}
