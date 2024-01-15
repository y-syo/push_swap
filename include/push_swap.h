/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:29:05 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/12 19:22:38 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_stack
{
	int				nb_init;
	int				nb;
	struct s_stack	*next;
}					t_stack;

/* ------ STACK UTILS ------ */

t_stack	*ft_stacknew(int content);
int		ft_stacksize(t_stack *stack);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_stackadd_front(t_stack **stack, t_stack *new);

#endif
