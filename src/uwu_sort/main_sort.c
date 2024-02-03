/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:20:24 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 23:42:13 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_head *head)
{
	int	size;

	size = ft_stacksize(head->stack_a);
	if (size < 2)
		return ;
	else if (size < 4)
	{
		small_sort(head);
	}
}

void	small_sort(t_head *head)
{
	if (ft_stacksize(head->stack_a) == 2)
	{
		if (head->stack_a->nb > head->stack_a->next->nb)
			sa(head);
		return ;
	}
	if (head->stack_a->nb > head->stack_a->next->nb
		&& head->stack_a->nb > head->stack_a->next->next->nb)
		ra(head);
	else if (head->stack_a->nb < head->stack_a->next->nb
		&& head->stack_a->next->nb > head->stack_a->next->next->nb)
		rra(head);
	if (head->stack_a->nb > head->stack_a->next->nb)
		sa(head);
}
