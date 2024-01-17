/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:26 by mmoussou          #+#    #+#             */
/*   Updated: 2024/01/17 04:49:29 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdio.h>

/*verifie que un str est un nombre valable,
qu'il passe dans atoi,
et qu'il ne depasse pas les limites des int*/

/*renvoie un booléen si le nb est 
valide(1)
invalide (0)*/
int	check_str(const char *str)
{
	int i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i])
	{
		if (str[i] >= '0' || str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_verif_nb(const char *str)
{
	long	atol;

	if (check_str(str))
		return (0);
	atol = ft_atol(str);
	if (atol > 2147483647 || atol < -2147483648)
		return (0);
	return (1);
}

/*remplie la structure avec les élements de av
-> il faut split chaque av
"3 2" "1 10" "5" -> 3 2 1 10 5
et verifier que chaque nb passe dans atoi
	
puis utiliser atoi pour remplir la structure choisit
	
si un nb est invalide, ne pas oublier de free, et renvoyer NULL*/
t_stack *fill_struct(int ac, char **av)
{
	char	**split_args;
	t_stack	*stack;
	t_stack	*new_node;
	int		i;
	int		j;

	stack = NULL;
	i = 0;
	while (i < ac)
	{
		split_args = ft_split(av[i], ' ');
		if (!split_args)
		{
			free(stack);
			return (NULL);
		}
		j = 0;
		while(split_args[j])
		{
			if(ft_verif_nb(split_args[j]))
			{
				new_node = ft_stacknew(ft_atoi(split_args[j]));
				ft_stackadd_back(&stack, new_node);
			}
			else
			{
				free(stack);
				free(split_args);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	return (stack);
}

/*verifie si la liste ne contient aucun doublons*/

/*renvoie un booléen si la liste est
bonne (aucun doublons) -> (1)
pas bonne (1 ou plusieurs doublons) -> (0)*/
int	verif_double(t_stack *stack)
{
	t_stack	*stack_next;

	while (stack->next)
	{
		stack_next = stack->next;
		while(stack_next)
		{
			if (stack->nb_init == stack_next->nb_init)
				return (0);
			stack_next = stack_next->next;
		}
		stack = stack->next;
	}
	return (1);
}

// tu dois "lisser" toutes les valeur, a partir de 0, et il n'y aura pas d'ecart superieur a 1
// pour ca tu va assiger a chaque maillon->nb une valeur
// qui depend de toute les nb_init de la list
// 0 1000 2 2000 -> 0 2 1 3
// -4 1 9 5 2 8 4 -> 0 1 6 4 2 5 3
// une vision simple de le voir/le coder:
//compter combien d'element dans toute la liste possede un nb_init en dessous du nb_init conserner
int	get_nb_not_replaced(t_stack *stack)
{
	while(stack->next)
	{
		if (stack->nb == -1)
			return (stack->nb_init);
		stack = stack->next;
	}
	return (stack->nb_init);
}

void	replace_nb_init(t_stack *stack)
{
	t_stack	*stack_tmp;
	int		min;
	int		i;

	i = 0;
	while (i < ft_stacksize(stack))
	{
		min = get_nb_not_replaced(stack);
		stack_tmp = stack;
		while (stack_tmp)
		{
			if (stack_tmp->nb_init < min && stack_tmp->nb == -1)
				min = stack_tmp->nb_init;
			stack_tmp = stack_tmp->next;
		}
		stack_tmp = stack;
		while (stack_tmp->nb_init != min || stack_tmp->nb != -1)
			stack_tmp = stack_tmp->next;
		stack_tmp->nb = i;
		i++;
	}
}



// mtn que tu a modifier tous et simplifier les nb_init dans nb
// a partir de mtn tu ne touche plus du tout a nb_init,
// uniquement a nb

/*verifie si la liste est trier*/

/*
renvoie un booléen si la liste est
trier(1)
pas trier(0)
*/
int	is_sorted(t_stack *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->nb > stack_a->next->nb)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

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
