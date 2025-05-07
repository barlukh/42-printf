/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 11:31:34 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/** Writes a number into the standard output
 * @param n Number to write
 * @param base Base of the number
 * @param style Style format indicator for hexadecimal letters
 * @return Length of the number
 */
size_t	ft_putnbr(int n, int base, int style)
{
	char	*style_lower;
	char	*style_upper;
	char	*style_choice;
	size_t	length;

	style_lower = "0123456789abcdef";
	style_upper = "0123456789ABCDEF";
	if (style == DIGIT || style == LOWERCASE)
		style_choice = style_lower;
	else
		style_choice = style_upper;
	length = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
	}
	if (n >= base)
		length += ft_putnbr(n / base, base, style);
	length += ft_putchar(style_choice[n % base]);
	return (length);
}
