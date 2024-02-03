/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:33:59 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 23:08:11 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ra(t_head *head)
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
}*/

void	rra(t_head *head)
{
	t_stack	*tmp;

	tmp = head->stack_a;
	if (tmp->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = head->stack_a;
		head->stack_a = tmp->next;
		tmp->next = NULL;
		ft_putendl_fd("rra", 1);
	}
}

void	rrb(t_head *head)
{
	t_stack	*tmp;

	tmp = head->stack_b;
	if (tmp->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = head->stack_b;
		head->stack_b = tmp->next;
		tmp->next = NULL;
		ft_putendl_fd("rrb", 1);
	}
}

void	rrr(t_head *head)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = head->stack_a;
	tmp2 = head->stack_b;
	if (tmp1->next && tmp2->next)
	{
		while (tmp1->next->next)
			tmp1 = tmp1->next;
		tmp1->next->next = head->stack_a;
		head->stack_a = tmp1->next;
		tmp1->next = NULL;
		while (tmp2->next->next)
			tmp2 = tmp2->next;
		tmp2->next->next = head->stack_b;
		head->stack_b = tmp2->next;
		tmp2->next = NULL;
		ft_putendl_fd("rrr", 1);
	}
}
