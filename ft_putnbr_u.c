/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:35:10 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 16:28:32 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_u(unsigned int n, unsigned int base, int style)
{
	char	*charset_lower;
	char	*charset_upper;
	char	*charset;
	size_t	length;

	charset_lower = "0123456789abcdef";
	charset_upper = "0123456789ABCDEF";
	if (style == DIGIT || style == LOWERCASE)
		charset = charset_lower;
	else
		charset = charset_upper;
	length = 0;
	if (n >= base)
		length += ft_putnbr_u(n / base, base, style);
	length += ft_putchar(charset[n % base]);
	return (length);
}
