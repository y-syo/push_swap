/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 07:29:57 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/18 07:31:33 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_double(t_stack *stack)
{
	t_stack	*stack_next;

	while (stack->next)
	{
		stack_next = stack->next;
		while (stack_next)
		{
			if (stack->nb_init == stack_next->nb_init)
				return (0);
			stack_next = stack_next->next;
		}
		stack = stack->next;
	}
	return (1);
}
