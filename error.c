/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:01:46 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/16 17:42:43 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	mult(char *arg)
{
	int	i;
	int	num_count;

	i = 0;
	num_count = 0;
	while (arg[i])
	{
		if (ft_isdigit(arg[i]))
		{
			num_count++;
			while (ft_isdigit(arg[i]))
				i++;
		}
		else if (arg[i] == ' ' || arg[i] == '\t')
			i++;
		else
		{
			num_count = 0;
			i++;
		}
		if (num_count > 1)
			return (1);
	}
	return (0);
}

int	check_dup(t_stack *mem)
{
	int	i;
	int	j;

	i = 0;
	while (i < mem->a_size)
	{
		j = i + 1;
		while (j < mem->a_size)
		{
			if (mem->a_stack[i] == mem->a_stack[j])
			{
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_args(int ac, char **av, t_stack *mem)
{
	int	i;
	int	arg;

	i = 1;
	while (i < ac)
	{
		if (mult(av[i]))
		{
			return (-1);
		}
		arg = ft_atoi(av[i]);
		if (arg == 0 && av[i][0] != '0')
		{
			return (-1);
		}
		mem->a_stack[i - 1] = arg;
		i++;
	}
	return (check_dup(mem));
}

int	check_args_1(int ac, t_stack *mem)
{
	int	i;
	int	arg;

	(void)ac;
	i = 0;
	while (i < mem->a_size)
	{
		if (mult(mem->avv[i]))
		{
			return (-1);
		}
		arg = ft_atoi(mem->avv[i]);
		if (arg == 0 && mem->avv[i][0] != '0')
		{
			return (-1);
		}
		mem->a_stack[i] = arg;
		i++;
	}
	return (check_dup(mem));
}

int	check(int ac, char **av, t_stack *mem)
{
	int		valid;
	int		i;

	valid = min_args(ac);
	if (valid == 1 && ac == 2)
	{
		mem->avv = ft_split(av[1], ' ');
		valid = check_args_1(ac, mem);
	}
	else if (valid == 1)
	{
		valid = check_args(ac, av, mem);
	}
	i = 0;
	if (mem->avv != NULL)
	{
		while (mem->avv[i])
			free(mem->avv[i++]);
		free(mem->avv);
	}
	return (valid);
}
