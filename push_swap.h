/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:04:38 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/16 17:47:29 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int		a_size;
	int		b_size;
	int		*a_stack;
	int		*b_stack;
	int		*index;
	int		idx_size;
	char	**avv;
}		t_stack;

int		check(int ac, char **av, t_stack *mem);
void	get_index(t_stack *stack);
int		main(int ac, char **av);
int		mult(char *arg);
int		min_args(int ac);
int		check_args(int ac, char **av, t_stack *mem);
int		check_args_1(int ac, t_stack *mem);
int		check_dup(t_stack *mem);
int		ft_sorted(t_stack *stack);
int		get_smallest(t_stack *stack);
int		c_word(char const *s, char c);

void	init(int ac, char **av, t_stack *mem);
void	sa(t_stack *stack, int flag);
void	sb(t_stack *stack, int flag);
void	ss(t_stack *stack, int flag);
void	pa(t_stack *stack, int flag);
void	pb(t_stack *stack, int flag);
void	ra(t_stack *stack, int flag);
void	rb(t_stack *stack, int flag);
void	rr(t_stack *stack, int flag);
void	rra(t_stack *stack, int flag);
void	rrb(t_stack *stack, int flag);
void	rrr(t_stack *stack, int flag);
void	sort_3(t_stack *stack);
void	sort_4(t_stack *stack);
void	sort_5(t_stack *stack);
void	sort_2(t_stack *stack);
void	in_sort(t_stack mem);
void	big(t_stack *stack);
void	radix(t_stack *stack);
void	bubble_sort(t_stack *tack);
void	index_arry(t_stack *stack);
void	radix_sort(t_stack *stack);
void	radix_sort_stack_b(t_stack *stack, int b_size, int i);
void	radix_sort_stack_a(t_stack *stack, int a_size, int i);

#endif
