/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:48:46 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/14 14:32:30 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one. */
void	ra(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	i = 0;
	if (stack->a_size < 2)
		return ;
	tmp = stack->a_stack[0];
	while (i < stack->a_size - 1)
	{
		stack->a_stack[i] = stack->a_stack[i + 1];
		i++;
	}
	stack->a_stack[stack->a_size - 1] = tmp;
	if (flag == 1)
		write(1, "ra\n", 3);
}

/* rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one. */
void	rb(t_stack *stack, int flag)
{
	int	tmp;
	int	i;

	i = 0;
	if (stack->b_size < 2)
		return ;
	tmp = stack->b_stack[0];
	while (i < stack->b_size - 1)
	{
		stack->b_stack[i] = stack->b_stack[i + 1];
		i++;
	}
	stack->b_stack[stack->b_size - 1] = tmp;
	if (flag == 1)
		write(1, "rb\n", 3);
}

//rr : ra and rb at the same time.
void	rr(t_stack *stack, int flag)
{
	ra(stack, 0);
	rb(stack, 0);
	if (flag == 1)
		write(1, "rr\n", 3);
}
