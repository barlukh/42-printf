/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:35:10 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 12:05:25 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, unsigned int base, int style, int *len, int *err)
{
	char	*charset_lcase;
	char	*charset_ucase;
	char	*charset;
	int		length;

	charset_lcase = "0123456789abcdef";
	charset_ucase = "0123456789ABCDEF";
	if (style == DIGIT || style == LCASE)
		charset = charset_lcase;
	else
		charset = charset_ucase;
	length = 0;
	if (n >= base)
		ft_putnbr_u(n / base, base, style, len, err);
	ft_putchar(charset[n % base], len, err);
}
