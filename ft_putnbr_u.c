/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:35:10 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 15:51:34 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, unsigned int base, int style, t_out *outp)
{
	const char	*charset_lcase;
	const char	*charset_ucase;
	const char	*charset;

	charset_lcase = "0123456789abcdef";
	charset_ucase = "0123456789ABCDEF";
	if (style == DIGIT || style == LCASE)
		charset = charset_lcase;
	else
		charset = charset_ucase;
	if (n >= base)
		ft_putnbr_u(n / base, base, style, outp);
	ft_putchar(charset[n % base], outp);
}
