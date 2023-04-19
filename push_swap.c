/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:04:31 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/18 19:15:50 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_exit(t_stack *mem)
{
	if (mem->a_stack)
		free(mem->a_stack);
	if (mem->b_stack)
		free(mem->b_stack);
	if (mem->index)
		free(mem->index);
	exit(1);
}

void	init(int ac, char **av, t_stack *mem)
{
	if (ac == 2)
		mem->a_size = c_word(av[1], ' ');
	else
		mem->a_size = ac - 1;
	mem->b_size = 0;
	mem->a_stack = (int *)malloc((ac - 1) * (sizeof(int) + 64));
	if (!mem->a_stack)
	{
		ft_exit(mem);
	}
	mem->b_stack = (int *)malloc((ac - 1) * (sizeof(int) + 64));
	if (!mem->b_stack)
	{
		ft_exit(mem);
	}
	mem->index = (int *)malloc((ac - 1) * (sizeof(int) + 64));
	if (!mem->index)
	{
		ft_exit(mem);
	}
	mem->avv = NULL;
}

int	min_args(int ac)
{
	if (ac < 2)
	{
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int			validity;
	t_stack		mem;

	init(ac, av, &mem);
	validity = check(ac, av, &mem);
	if (validity == -1)
	{
		ft_printf("Error\n");
		ft_exit(&mem);
	}
	if (ft_sorted(&mem) == -1)
		ft_exit(&mem);
	in_sort(mem);
	ft_exit(&mem);
}
