/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_nb_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 07:34:27 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/18 07:35:01 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_nb_not_replaced(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->nb == -1)
			return (stack->nb_init);
		stack = stack->next;
	}
	return (stack->nb_init);
}

void	replace_nb_init(t_stack *stack)
{
	t_stack	*stack_tmp;
	int		min;
	int		i;

	i = 0;
	while (i < ft_stacksize(stack))
	{
		min = get_nb_not_replaced(stack);
		stack_tmp = stack;
		while (stack_tmp)
		{
			if (stack_tmp->nb_init < min && stack_tmp->nb == -1)
				min = stack_tmp->nb_init;
			stack_tmp = stack_tmp->next;
		}
		stack_tmp = stack;
		while (stack_tmp->nb_init != min || stack_tmp->nb != -1)
			stack_tmp = stack_tmp->next;
		stack_tmp->nb = i;
		i++;
	}
}
