/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:39 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/25 16:05:15 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_zero(void)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (2));
	if (!p)
		return (NULL);
	p[0] = '0';
	p[1] = '\0';
	return (p);
}

static char	*ft_negative(int i, int n)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (i + 2));
	if (!p)
		return (0);
	p[i + 1] = '\0';
	while (n != 0)
	{
		p[i] = -(n % 10) + '0';
		n = n / 10;
		i--;
	}
	p[i] = '-';
	return (p);
}

static char	*ft_positive(int i, int n)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (0);
	p[i] = '\0';
	while (n != 0)
	{
		p[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	int		i;
	int		y;
	char	*p;

	i = 0;
	y = n;
	while (y != 0)
	{
		i++;
		y = y / 10;
	}
	if (n == 0)
		p = ft_zero();
	if (n < 0)
		p = ft_negative(i, n);
	if (n > 0)
		p = ft_positive(i, n);
	if (!p)
		return (NULL);
	else
		return (p);
}
