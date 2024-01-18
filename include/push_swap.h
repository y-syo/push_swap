/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:29:05 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/18 07:40:53 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>

int		ft_verif_nb(const char *str);
t_stack	*fill_struct(int ac, char **av);
int		verif_double(t_stack *stack);
void	replace_nb_init(t_stack *stack);
int		is_sorted(t_stack *stack_a);

#endif
