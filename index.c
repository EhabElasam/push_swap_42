/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:47:56 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/15 18:06:07 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// to get the index
void	get_index(t_stack *stack)
{
	int	i;
	int	indexer;
	int	y;

	i = 0;
	y = 0;
	while (i < stack->a_size)
	{
		indexer = 0;
		y = 0;
		while (y < stack->a_size)
		{
			if (stack->a_stack[i] > stack->a_stack[y])
				indexer++;
			y++;
		}
		stack->index[i] = indexer;
		i++;
	}
}

//von index to a_stack...
void	index_arry(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->a_size)
	{
		stack->a_stack[i] = stack->index[i];
		i++;
	}
}

void	ft_radix(t_stack *stack, int x)
{
	int	s;
	int	i;
	int	j;

	s = stack->a_size;
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < s)
		{
			if (((stack->a_stack[0]) & (1 << i)) != 0)
				ra(stack, 1);
			else
				pb(stack, 1);
			j++;
		}
		while (stack->b_size != 0)
			pa(stack, 1);
		i++;
	}
}

void	big(t_stack *stack)
{
	if (stack->a_size <= 100)
		ft_radix(stack, 7);
	else if (stack->a_size <= 500)
		ft_radix(stack, 9);
	else
		ft_radix(stack, 31);
}
