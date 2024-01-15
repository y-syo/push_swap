/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:30:08 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/15 18:52:45 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	afficher_KO_OK(int i)
{
	if (i == 1)
		printf("ok ");
	else
		printf("ERREUR ");
}
int	main(void)
{
	int	ac = 4;
	char **av = (char *[]){"1  2 3", "4 5  6","7    8        9", "10"};
	t_stack *stack = fill_struct(ac, av);
	afficher_KO_OK(ft_stacksize(stack) == 10);
	afficher_KO_OK(stack->nb_init == 1 && 
		stack->next->nb_init == 2 && 
		stack->next->next->nb_init == 3 &&
		stack->next->next->next->nb_init == 4 && 
		stack->next->next->next->next->next->nb_init == 5 && 
		stack->next->next->next->next->next->next->nb_init == 6 &&
		ft_stacklast(stack)->nb_init == 10);

	ac = 1;
	av = (char *[]){"1 2 3 4 5 6 7 8 9 10"};
	stack = fill_struct(ac, av);
	afficher_KO_OK(ft_stacksize(stack) == 10);
	afficher_KO_OK(stack->nb_init == 1 && 
		stack->next->nb_init == 2 && 
		stack->next->next->nb_init == 3 &&
		stack->next->next->next->nb_init == 4 && 
		stack->next->next->next->next->next->nb_init == 5 && 
		stack->next->next->next->next->next->next->nb_init == 6 &&
		ft_stacklast(stack)->nb_init == 10);

	ac = 10;
	av = (char *[]){"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
	stack = fill_struct(ac, av);
	afficher_KO_OK(ft_stacksize(stack) == 10);
	afficher_KO_OK(stack->nb_init == 1 && 
		stack->next->nb_init == 2 && 
		stack->next->next->nb_init == 3 &&
		stack->next->next->next->nb_init == 4 && 
		stack->next->next->next->next->next->nb_init == 5 && 
		stack->next->next->next->next->next->next->nb_init == 6 &&
		ft_stacklast(stack)->nb_init == 10);

	ac = 10;
	av = (char *[]){"1", "2", "3", "4", "5", "6", "7", "8", "9", "2147483648"};
	stack = fill_struct(ac, av);
	afficher_KO_OK(stack == NULL);
}
