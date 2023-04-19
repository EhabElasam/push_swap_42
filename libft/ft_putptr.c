/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:52:57 by eelasam           #+#    #+#             */
/*   Updated: 2022/12/21 12:02:33 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_p(long unsigned int nb, int *len)
{
	if (nb >= 16)
	{
		ft_p(nb / 16, len);
		ft_p(nb % 16, len);
	}
	else
		ft_putchar("0123456789abcdef"[nb], len);
}

void	ft_putptr(long unsigned int nb, int *len)
{
	if (nb == 0)
	{
		*len += write(1, "(nil)", 5);
	}
	else
	{
		*len += write(1, "0x", 2);
		ft_p(nb, len);
	}
}
