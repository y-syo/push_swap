/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:26 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/21 22:47:56 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int	size;

	size = ft_stacksize(stack_a);
	if (size > 1)
	{
		ft_swap(&stack_a[size - 1], &stack_a[size - 2]);
		ft_putendl_fd("sa", 1);
	}
}

void	sb(t_stack *stack_b)
{
	int	size;

	size = ft_stacksize(stack_b);
	if (size > 1)
	{
		ft_swap(&stack_b[size - 1], &stack_b[size - 2]);
		ft_putendl_fd("sb", 1);
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_stacksize(stack_a);
	size_b = ft_stacksize(stack_b);
	if (size_a > 1 && size_b > 1)
	{
		ft_swap(stack_a, stack_a);
		ft_swap(stack_b, stack_b);
	}
	ft_putendl_fd("ss", 1);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b)
	{
		ft_putendl_fd("pa", 1);
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	/*envoie l'element en haut de la pile a -> en haut de la pile b
	print "pb"*/
	ft_putendl_fd("pb", 1);
}

void	ra(t_stack *stack_a)
{
	/*envoie l'element en haut de la pile a -> en bas de la pile a
	print "ra"*/
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack *stack_b)
{
	/*envoie l'element en haut de la pile b -> en bas de la pile b
	print "rb"*/
	ft_putendl_fd("rb", 1);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	/*effectue ra et rb
	print "rr"*/
	ft_putendl_fd("rr", 1);
}

void	rra(t_stack *stack_a)
{
	/*envoie l'element en bas de la pile a -> en haut de la pile a
	print "rra"*/
	ft_putendl_fd("rra", 1);
}

void	rrb(t_stack *stack_b)
{
	/*envoie l'element en bas de la pile b -> en haut de la pile b
	print "rrb"*/
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	/*effectue rra et rrb
	print "rrr"*/
	ft_putendl_fd("rrr", 1);
}
