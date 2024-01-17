/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:46:09 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/17 02:27:06 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int content)
{
	t_stack	*new_element;

	new_element = malloc(sizeof(t_stack));
	if (!new_element)
		return (NULL);
	new_element->nb_init = content;
	new_element->nb = -1;
	new_element->next = NULL;
	return (new_element);
}

int	ft_stacksize(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack)
	{
		i++;
		while(stack->next)
		{
			stack = stack->next;
			i++;
		}
	}
	return (i);
}

t_stack	*ft_stacklast(t_stack *stack)
{
	if (stack)
	{
		while (stack->next)
			stack = stack->next;
		return (stack);
	}
	return (NULL);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (!stack || !new)
			return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	tmp = ft_stacklast(*stack);
	tmp->next = new;
}

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = new;
	if (!new || !stack)
		return ;
	while (new->next)
		new = new->next;
	new->next = tmp;
}
