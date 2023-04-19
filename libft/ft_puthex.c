/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:11:38 by eelasam           #+#    #+#             */
/*   Updated: 2022/12/20 11:53:53 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(unsigned int nb, char c, int *len)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, c, len);
		ft_puthex(nb % 16, c, len);
	}
	if (nb < 16)
	{
		if (c == 'x')
			ft_putchar("0123456789abcdef"[nb], len);
		if (c == 'X')
			ft_putchar("0123456789ABCDEF"[nb], len);
	}
}
