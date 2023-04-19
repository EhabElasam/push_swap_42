/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:11:12 by eelasam           #+#    #+#             */
/*   Updated: 2023/04/10 17:36:09 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int	ft_atoi(const char *str)
{
	int			s;
	long	r;
	int         valid;

	r = 0;
	s = 1;
	valid = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
		if (*str == '-' || *str == '+')
		{
			//ft_printf("++--");
			valid = 0;
		}
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{

		r = (r * 10) + (*str - '0');
		str++;
		
	}
	if ((r * s > 2147483647) || (r * s < -2147483648))
		{
		//	ft_printf ("MIN/MAX:");
			valid = 0;
		}
	if (*str != '\0' && *str != ' ' && valid)
	{
	//	ft_printf("char");
		valid = 0;
	}
	if (valid)
    	return ((int)(r * s));
	else
    	return (0);
}