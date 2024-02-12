/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:20:24 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/07 23:51:27 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stackindex(int i, t_stack *stack)
{
	if (i < 0)
		return (NULL);
	while (i && stack)
	{
		stack = stack->next;
		i--;
	}
	return (stack);
}

int	index_to_b(int nb, t_head *head)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = head->stack_b;
	while (tmp->nb > nb && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	cost_to_top(int index, int size)
{
	if (index > (size / 2))
		return (size - index);
	return (index);
}

int	find_lowest_cost(t_head *head)
{
	int	lowest;
	int	lowest_index;
	int	tmp;
	int	i;

	lowest = -1;
	i = 0;
	while (i < ft_stacksize(head->stack_a))
	{
		tmp = cost_to_top(i, ft_stacksize(head->stack_a))
			+ cost_to_top(index_to_b(ft_stackindex(i, head->stack_a)->nb, head),
				ft_stacksize(head->stack_b));
		if (tmp < lowest || lowest == -1)
		{
			lowest = tmp;
			lowest_index = i;
		}
		i++;
	}
	return (lowest_index);
}

void	up_index_a(t_head *head, int index)
{
	if (index > (ft_stacksize(head->stack_a) / 2))
		while (index--)
			ra(head);
	else
		while (index--)
			rra(head);
}

void	push_to_b(t_head *head)
{
	int	i;

	i = index_to_b(head->stack_a->nb, head);
	if (i > (ft_stacksize(head->stack_b) / 2))
		while (i--)
			rb(head);
	else
		while (i--)
			rrb(head);
	pb(head);
}

int	sort(t_head *head)
{
	int	size;
	int lowest;

	size = ft_stacksize(head->stack_a);
	if (size < 2)
		return (0);
	else if (size < 4)
	{
		small_sort(head);
		return (0);
	}
	pb(head);
	pb(head);
	while (ft_stacksize(head->stack_a) > 3)
	{
		lowest = find_lowest_cost(head);
		up_index_a(head, lowest);
		push_to_b(head);
	}
	return (0);
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
