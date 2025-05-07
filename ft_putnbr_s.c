/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 13:39:50 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/** Writes a signed integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @param style Style format indicator for hexadecimal letters
 * @return Length of the integer
 */
size_t	ft_putnbr_s(int n, int base, int style)
{
	char	*charset_lower;
	char	*charset_upper;
	char	*charset_choice;
	size_t	length;

	charset_lower = "0123456789abcdef";
	charset_upper = "0123456789ABCDEF";
	if (style == DIGIT || style == LOWERCASE)
		charset_choice = charset_lower;
	else
		charset_choice = charset_upper;
	length = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
	}
	if (n >= base)
		length += ft_putnbr_s(n / base, base, style);
	length += ft_putchar(charset_choice[n % base]);
	return (length);
}
