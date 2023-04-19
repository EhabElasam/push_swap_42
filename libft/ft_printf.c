/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:38:43 by eelasam           #+#    #+#             */
/*   Updated: 2022/12/07 14:38:49 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_format(char c, int *len, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	if (c == 'u')
		ft_putnbru(va_arg(args, unsigned int), len);
	if (c == '%')
		*len += write(1, "%", 1);
	if (c == 'X' || c == 'x')
		ft_puthex(va_arg(args, unsigned int), c, len);
	if (c == 'p')
		ft_putptr(va_arg(args, long unsigned int), len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_format(str[i], &len, args);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

/* int	main(void)
{
printf("%d\n", printf("%c", 'h'));
printf("%d\n", ft_printf("%c", 'h'));	
//printf("%d\n", printf("%s", (char *)NULL));
//printf("%d\n", ft_printf("%s", NULL));
printf("%d\n", printf("%d", 14324));
printf("%d\n", ft_printf("%d", 14324));
printf("%d\n", printf("%i", 14324));
printf("%d\n", ft_printf("%i", 14324));
printf("%d\n", printf("%u", 1));
printf("%d\n", ft_printf("%u", 1));
printf("%d\n", printf("%%"));
printf("%d\n", ft_printf("%%"));
printf("%d\n", printf("%p",(void *) 0));
printf("%d\n", ft_printf("%p", 0));
return (0);
} */
