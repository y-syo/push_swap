/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:07:20 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 02:28:25 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_head *head)
{
	t_stack	*tmp;

	if (head->stack_b)
	{
		tmp = head->stack_b->next;
		head->stack_b->next = head->stack_a;
		head->stack_a = head->stack_b;
		head->stack_b = tmp;
		ft_putendl_fd("pa", 1);
	}
}

void	pb(t_head *head)
{
	t_stack	*tmp;

	if (head->stack_a)
	{
		tmp = head->stack_a->next;
		head->stack_a->next = head->stack_b;
		head->stack_b = head->stack_a;
		head->stack_a = tmp;
		ft_putendl_fd("pb", 1);
	}
}
