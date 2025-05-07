/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:57:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 11:23:59 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	size_t	ft_parse_argument(int c, va_list *args);

/** Writes a string with format specifiers into the standard output
 * @param str String to write
 * @param ... Additional variadic arguments matching format specifiers
 * @return Length of the character
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	length;
	size_t	i;

	va_start(args, str);
	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			length++;
			i++;
		}
		else
		{
			length += ft_parse_argument(str[i + 1], &args);
			i += 2;
		}
	}
	va_end(args);
	return (length);
}

/** Parses each variadic argument of the formatted string
 * @param c Argument to parse
 * @param args Object holding all variadic arguments
 * @return Length of the string
 */
static size_t	ft_parse_argument(int c, va_list *args)
{
	if (c == '%')
		return (ft_putchar(c));
	else if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int), 10, DIGIT));
	else if (c == 'x')
		return (ft_putnbr(va_arg(*args, int), 16, LOWERCASE));
	else if (c == 'X')
		return (ft_putnbr(va_arg(*args, int), 16, UPPERCASE));
	else
		return (0);
}
