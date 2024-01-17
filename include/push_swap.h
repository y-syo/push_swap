/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:29:05 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/17 02:31:22 by mmoussou         ###   ########.fr       */
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

int		ft_verif_nb(const char *str);
t_stack *fill_struct(int ac, char **av);
int		verif_double(t_stack *stack);
void	replace_nb_init(t_stack *stack);
int		is_sorted(t_stack *stack_a);

#endif
