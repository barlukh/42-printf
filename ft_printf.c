/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:57:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 12:12:23 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_parse_argument(char c, va_list *args, int *length, int *err);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		err;
	int		len;
	size_t	i;

	va_start(args, str);
	err = FALSE;
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i], &len, &err);
			i++;
		}
		else
		{
			if (str[i + 1] == '\0')
				break ;
			ft_parse_argument(str[i + 1], &args, &len, &err);
			i += 2;
		}
		if (err == TRUE)
				break ;
	}
	va_end(args);
	return (len);
}

/** Parses each variadic argument of the formatted string
 * @param c Argument to parse
 * @param args Object holding all variadic arguments
 * @return Length of the string
 */
static void	ft_parse_argument(char c, va_list *args, int *len, int *err)
{
	if (c == '%')
		ft_putchar(c, len, err);
	else if (c == 'c')
		ft_putchar(va_arg(*args, int), len, err);
	else if (c == 's')
		ft_putstr(va_arg(*args, const char *), len, err);
	else if (c == 'd' || c == 'i')
		ft_putnbr_s(va_arg(*args, int), BASE10, len, err);
	else if (c == 'u')
		ft_putnbr_u(va_arg(*args, unsigned int), BASE10, DIGIT, len, err);
	else if (c == 'x')
		ft_putnbr_u(va_arg(*args, unsigned int), BASE16, LCASE, len, err);
	else if (c == 'X')
		ft_putnbr_u(va_arg(*args, unsigned int), BASE16, UCASE, len, err);
	else if (c == 'p')
		ft_putnbr_p(va_arg(*args, uintptr_t), BASE16, len, err);
	else
		return ;
}
