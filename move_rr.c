/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:48:31 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/14 14:31:52 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one. */
void	rrb(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	i = stack->b_size;
	tmp = stack->b_stack[i - 1];
	while (i > 0)
	{
		stack->b_stack[i] = stack->b_stack[i - 1];
		i--;
	}
	stack->b_stack[0] = tmp;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

/* rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one. */
void	rra(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	i = stack->a_size;
	tmp = stack->a_stack[i - 1];
	while (i > 0)
	{
		stack->a_stack[i] = stack->a_stack[i - 1];
		i--;
	}
	stack->a_stack[0] = tmp;
	if (flag == 1)
		write(1, "rra\n", 4);
}

//rrr : rra and rrb at the same time.
void	rrr(t_stack *stack, int flag)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (flag == 1)
		write(1, "rrr\n", 4);
}
