/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:31:08 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/16 19:43:19 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	while ((i < len && big[i] != '\0') || i == 0)
	{
		y = 0;
		while (i + y < len && big[i + y] == little[y] && little[y] != '\0')
			y++;
		if (little[y] == '\0' || little[y] == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
