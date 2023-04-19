/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:04:56 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/14 14:34:08 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ob die Argumente sortiert sind
int	ft_sorted(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < stack->a_size - 1)
	{
		temp = stack->a_stack[i];
		if (temp > stack->a_stack[i + 1])
			j++;
		i++;
	}
	if (j == 0)
		return (-1);
	return (1);
}

// Funktion, die das kleinste Element aus einem Stack  Elementen zurückgibt
int	get_smallest(t_stack *stack)
{
	int	smallest;
	int	i;

	smallest = stack->a_stack[0];
	i = 1;
	while (i < stack->a_size)
	{
		if (stack->a_stack[i] < smallest)
		{
			smallest = stack->a_stack[i];
		}
		i++;
	}
	return (smallest);
}

//word(number) counter
int	c_word(char const *s, char c)
{
	int	i;
	int	alp;

	i = 0;
	alp = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			alp++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (alp);
}
