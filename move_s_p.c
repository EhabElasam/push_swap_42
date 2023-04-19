/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_s_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:49:02 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/14 14:33:33 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.*/
void	sa(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->a_size < 2)
		return ;
	tmp = stack->a_stack[0];
	stack->a_stack[0] = stack->a_stack[1];
	stack->a_stack[1] = tmp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

/* sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements. */
void	sb(t_stack *stack, int flag)
{
	int	tmp;

	if (stack->b_size < 2)
		return ;
	tmp = stack->b_stack[0];
	stack->b_stack[0] = stack->b_stack[1];
	stack->b_stack[1] = tmp;
	if (flag == 1)
		write(1, "sb\n", 3);
}

//ss : sa and sb at the same time.
void	ss(t_stack *stack, int flag)
{
	sa(stack, 0);
	sb(stack, 0);
	if (flag == 1)
		write(1, "ss\n", 3);
}

/* pb (push b): Take the first element at the top of a
and put it at the top of b.
Do nothing if a is empty */
void	pb(t_stack *stack, int flag)
{
	if (stack->a_size == 0)
		return ;
	stack->b_size += 1;
	rrb(stack, 0);
	stack->b_stack[0] = stack->a_stack[0];
	ra(stack, 0);
	stack->a_size--;
	if (flag == 1)
		write(1, "pb\n", 3);
}

/*
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
*/
void	pa(t_stack *stack, int flag)
{
	if (stack->b_size == 0)
		return ;
	stack->a_size += 1;
	rra(stack, 0);
	stack->a_stack[0] = stack->b_stack[0];
	rb(stack, 0);
	stack->b_size--;
	if (flag == 1)
		write(1, "pa\n", 3);
}
