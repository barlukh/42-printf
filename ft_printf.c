/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:57:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 15:54:36 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_parse_argument(char c, va_list *args, t_out *outp);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_out	outp;
	size_t	i;

	va_start(args, str);
	outp.err = FALSE;
	outp.len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar(str[i++], &outp);
		else
		{
			if (str[i + 1] == '\0')
				break ;
			ft_parse_argument(str[i + 1], &args, &outp);
			i += 2;
		}
		if (outp.err == TRUE)
			break ;
	}
	va_end(args);
	return (outp.len);
}

/** Parses each variadic argument of the formatted string
 * @param c Argument to parse
 * @param args Object holding all variadic arguments
 * @param outp err: a bool error flag, len: output length
 */
static void	ft_parse_argument(char c, va_list *args, t_out *outp)
{
	if (c == '%')
		ft_putchar(c, outp);
	else if (c == 'c')
		ft_putchar(va_arg(*args, int), outp);
	else if (c == 's')
		ft_putstr(va_arg(*args, const char *), outp);
	else if (c == 'd' || c == 'i')
		ft_putnbr_s(va_arg(*args, int), BASE10, outp);
	else if (c == 'u')
		ft_putnbr_u(va_arg(*args, unsigned int), BASE10, DIGIT, outp);
	else if (c == 'x')
		ft_putnbr_u(va_arg(*args, unsigned int), BASE16, LCASE, outp);
	else if (c == 'X')
		ft_putnbr_u(va_arg(*args, unsigned int), BASE16, UCASE, outp);
	else if (c == 'p')
		ft_putnbr_p(va_arg(*args, uintptr_t), BASE16, outp);
	else
		return ;
}
