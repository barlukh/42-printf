/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:57:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/10 17:24:08 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_plain_character(const char *s, size_t *i, int *count);
static void	ft_format_specifier(const char *s, size_t *i, int *count, va_list *args);
static int	ft_parse_argument(char c, va_list *args);

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	size_t	i;

	if (!s)
		return (-1);
	va_start(args, s);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			ft_plain_character(s, &i, &count);
		else
			ft_format_specifier(s, &i, &count, &args);
		if (count == -1)
			return (-1);
	}
	va_end(args);
	return (count);
}

static void	ft_plain_character(const char *s, size_t *i, int *count)
{
	if (ft_putchar(s[(*i)++]) < 1)
		*count = -1;
	else
		(*count)++;
}

static void	ft_format_specifier(const char *s, size_t *i, int *count, va_list *args)
{
	int	check;

	check = ft_parse_argument(s[(*i) + 1], args);
	if (check == -1)
	{
		*count = -1;
		return ;
	}
	*count += check;
	*i += 2;
}

/** Parses each variadic argument of the formatted string
 * @param c Argument to parse
 * @param args Object holding all variadic arguments
 * @return Number of characters written, -1 on error
 */
static int	ft_parse_argument(char c, va_list *args)
{
	if (c == '%')
		return (ft_putchar(c));
	else if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, const char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_s(va_arg(*args, int), BASE10));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(*args, unsigned int), BASE10, DIGIT));
	else if (c == 'x')
		return (ft_putnbr_u(va_arg(*args, unsigned int), BASE16, LCASE));
	else if (c == 'X')
		return (ft_putnbr_u(va_arg(*args, unsigned int), BASE16, UCASE));
	else if (c == 'p')
		return (ft_putnbr_p(va_arg(*args, uintptr_t), BASE16));
	else
		return (-1);
}
