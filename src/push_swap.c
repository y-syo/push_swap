/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:26 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/18 07:37:51 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	/*echange les 2 elements en haut de la pile
	print "sa"*/
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack *stack_b)
{
	/*echange les 2 elements en haut de la pile
	print "sb"*/
	ft_putendl_fd("sb", 1);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	/*effectue sa et sb
	print "ss"*/
	ft_putendl_fd("ss", 1);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	/*envoie l'element en haut de la pile b -> en haut de la pile a
	print "pa"*/
	ft_putendl_fd("pa", 1);
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
