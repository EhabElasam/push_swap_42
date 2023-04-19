/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:49:16 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/14 16:16:15 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *stack)
{
	sa(stack, 1);
}

void	sort_3(t_stack *stack)
{
	if (stack->a_stack[0] > stack->a_stack[1]
		&& stack->a_stack[0] < stack->a_stack[2])
	{
		sa(stack, 1);
		if (ft_sorted(stack))
			return ;
	}
	else if (stack->a_stack[0] > stack->a_stack[1]
		&& stack->a_stack[1] > stack->a_stack[2])
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (stack->a_stack[2] > stack->a_stack[1]
		&& stack->a_stack[0] > stack->a_stack[2])
		ra(stack, 1);
	else if (stack->a_stack[2] < stack->a_stack[1]
		&& stack->a_stack[0] < stack->a_stack[2])
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (stack->a_stack[0] < stack->a_stack[1]
		&& stack->a_stack[0] > stack->a_stack[2])
		rra(stack, 1);
}

void	sort_4(t_stack *stack)
{
	int	smallest;

	smallest = get_smallest(stack);
	if (stack->a_stack[1] == smallest)
		sa(stack, 1);
	else if (stack->a_stack[2] == smallest)
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	else if (stack->a_stack[3] == smallest)
		rra(stack, 1);
	pb(stack, 1);
	sort_3(stack);
	pa(stack, 1);
}

void	sort_5(t_stack *stack)
{
	int	smallest;

	smallest = get_smallest(stack);
	if (stack->a_stack[1] == smallest)
		sa(stack, 1);
	else if (stack->a_stack[2] == smallest)
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	else if (stack->a_stack[3] == smallest)
	{
		rra(stack, 1);
		rra(stack, 1);
	}
	else if (stack->a_stack[4] == smallest)
		rra(stack, 1);
	pb(stack, 1);
	sort_4(stack);
	pa(stack, 1);
}

void	in_sort(t_stack mem)
{
	get_index(&mem);
	index_arry(&mem);
	if (mem.a_size == 2)
		sort_2(&mem);
	else if (mem.a_size == 3)
		sort_3(&mem);
	else if (mem.a_size == 4)
		sort_4(&mem);
	else if (mem.a_size == 5)
		sort_5(&mem);
	else
		big(&mem);
}
