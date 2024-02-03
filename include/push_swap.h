/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:29:05 by mmoussou          #+#    #+#             */
/*   Updated: 2024/02/03 02:02:03 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_head
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}		t_head;

void	rrr(t_head *head);
void	rrb(t_head *head);
void	rra(t_head *head);
void	rr(t_head *head);
void	rb(t_head *head);
void	ra(t_head *head);
void	pb(t_head *head);
void	pa(t_head *head);
void	ss(t_head *head);
void	sb(t_head *head);
void	sa(t_head *head);

int		ft_verif_nb(const char *str);
t_stack	*fill_struct(int ac, char **av);
int		verif_double(t_stack *stack);
void	replace_nb_init(t_stack *stack);
int		is_sorted(t_stack *stack_a);

#endif
