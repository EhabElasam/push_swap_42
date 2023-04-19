/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:19 by eelasam           #+#    #+#             */
/*   Updated: 2022/10/25 16:49:32 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_co_alp(char const *s, char c)
{
	int	i;
	int	alp;

	i = 0;
	alp = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			alp++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (alp);
}

static int	ft_alp_size(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		alp;
	int		size;
	int		y;
	char	**str;

	i = 0;
	y = -1;
	alp = ft_co_alp(s, c);
	str = (char **)malloc((alp + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (++y < alp)
	{
		while (s[i] == c)
			i++;
		size = ft_alp_size(s, c, i);
		str[y] = ft_substr(s, i, size);
		i += size;
	}
	str[y] = 0;
	return (str);
}
