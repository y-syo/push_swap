/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:10:39 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/18 14:35:59 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_args(t_stack **stack, char **splitted_args)
{
	t_stack	*new_node;
	int		j;

	j = 0;
	while (splitted_args[j])
	{
		if (ft_verif_nb(splitted_args[j]))
		{
			new_node = ft_stacknew(ft_atoi(splitted_args[j]));
			if (!new_node)
			{
				ft_free("sa", stack, &splitted_args);
				return (1);
			}
			ft_stackadd_back(stack, new_node);
		}
		else
		{
			ft_free("sa", stack, &splitted_args);
			return (1);
		}
		j++;
	}
	return (0);
}

t_stack	*fill_struct(int ac, char **av)
{
	char	**splitted_args;
	t_stack	*stack;
	t_stack	*new_node;
	int		i;

	stack = NULL;
	i = 0;
	while (i < ac)
	{
		splitted_args = ft_split(av[i], ' ');
		if (!split_args)
		{
			ft_free("s", &stack);
			return (NULL);
		}
		if (split_args(&stack, splitted_args))
			return (NULL);
		ft_free("a", &splitted_args);
		i++;
	}
	ft_printf("%S uwu\n", stack);
	return (stack);
}
