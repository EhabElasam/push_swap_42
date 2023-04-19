/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:21:24 by eelasam           #+#    #+#             */
/*   Updated: 2022/12/15 16:21:38 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbru(unsigned int nb, int *len)
{
	if (nb > 9)
	{
		ft_putnbru(nb / 10, len);
		ft_putnbru(nb % 10, len);
	}
	else
		ft_putchar(nb + 48, len);
}
