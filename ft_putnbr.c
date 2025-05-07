/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 09:53:18 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/** Writes a number into the standard output
 * @param n Number to write
 * @param base Base of the number
 * @return Length of the number
 */
size_t	ft_putnbr(int n, int base)
{
	char	*symbols;
	size_t	length;

	symbols = "0123456789abcdef";
	length = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
	}
	if (n >= base)
		length += ft_putnbr(n / base, base);
	length += ft_putchar(symbols[n % base]);
	return (length);
}
