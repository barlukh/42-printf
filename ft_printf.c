/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:57:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/06 12:14:19 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static size_t	check_argument(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(*args, int)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	args_length;
	size_t	i;

	va_start(args, str);
	args_length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			args_length++;
			i++;
		}
		else
		{
			args_length += check_argument(str[i + 1], &args);
			i += 2;
		}
	}
	va_end(args);
	return (args_length);
}

int	main(void)
{
	int i = -2147;
	printf("%d\n", printf("%d\n", i));
	ft_printf("%d\n", ft_printf("%d\n", i));
	return (0);
}
