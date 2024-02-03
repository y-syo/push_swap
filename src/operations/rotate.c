/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:33:35 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 02:40:15 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_head *head)
{
	t_stack	*tmp;

	if (head->stack_a)
	{
		tmp = head->stack_a->next;
		ft_stacklast(head->stack_a)->next = head->stack_a;
		head->stack_a->next = NULL;
		head->stack_a = tmp;
		ft_putendl_fd("ra", 1);
	}
}

void	rb(t_head *head)
{
	t_stack	*tmp;

	if (head->stack_b)
	{
		tmp = head->stack_b->next;
		ft_stacklast(head->stack_b)->next = head->stack_b;
		head->stack_b->next = NULL;
		head->stack_b = tmp;
		ft_putendl_fd("rb", 1);
	}
}

void	rr(t_head *head)
{
	t_stack	*tmp;

	if (head->stack_a && head->stack_b)
	{
		tmp = head->stack_a->next;
		ft_stacklast(head->stack_a)->next = head->stack_a;
		head->stack_a->next = NULL;
		head->stack_a = tmp;
		tmp = head->stack_b->next;
		ft_stacklast(head->stack_b)->next = head->stack_b;
		head->stack_b->next = NULL;
		head->stack_b = tmp;
		ft_putendl_fd("rr", 1);
	}
}
