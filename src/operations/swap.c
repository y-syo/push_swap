/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:09:26 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 02:18:22 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_head *head)
{
	t_stack	*tmp;
	int		size;

	size = ft_stacksize(head->stack_a);
	if (size > 1)
	{
		tmp = head->stack_a->next;
		head->stack_a->next = head->stack_a->next->next;
		tmp->next = head->stack_a;
		head->stack_a = tmp;
		ft_printf("sa\n");
	}
}

void	sb(t_head *head)
{
	t_stack	*tmp;
	int		size;

	size = ft_stacksize(head->stack_b);
	if (size > 1)
	{
		tmp = head->stack_b->next;
		head->stack_b->next = head->stack_b->next->next;
		tmp->next = head->stack_b;
		head->stack_b = tmp;
		ft_printf("sb\n");
	}
}

void	ss(t_head *head)
{
	t_stack	*tmp;
	int		size_a;
	int		size_b;

	size_a = ft_stacksize(head->stack_a);
	size_b = ft_stacksize(head->stack_b);
	if (size_a > 1 && size_b > 1)
	{
		tmp = head->stack_a->next;
		head->stack_a->next = head->stack_a->next->next;
		tmp->next = head->stack_a;
		head->stack_a = tmp;
		tmp = head->stack_b->next;
		head->stack_b->next = head->stack_b->next->next;
		tmp->next = head->stack_b;
		head->stack_b = tmp;
		ft_printf("ss\n");
	}
}
