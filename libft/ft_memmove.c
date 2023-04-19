/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:23:58 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/12 11:27:34 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	i = -1;
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (!dest1 && !src1)
		return (NULL);
	if (src1 < dest1)
	{
		while ((int)(--n) >= 0)
			*(dest1 + n) = *(src1 + n);
	}
	else
	{
		while (++i < n)
			*(dest1 + i) = *(src1 + i);
	}
	return (dest);
}
