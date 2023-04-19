/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:18:27 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/16 20:40:32 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!dst && size == 0)
		return (0);
	while (dst[i] && i < size)
		i++;
	while ((src[y] && ((i + y + 1) < size)))
	{
		dst[i + y] = src[y];
		y++;
	}
	if (i != size)
		dst[i + y] = '\0';
	return (i + ft_strlen(src));
}
