/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:04:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 08:44:10 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** Writes a memory address of a pointer into the standard output
 * @param p Memory address to write (represented as an integer)
 * @param base Base of the integer
 * @return Length of the integer
 */
size_t	ft_putnbr_p(uintptr_t p, size_t base)
{
	char			*charset;
	size_t			length;

	if (p == 0)
		return(ft_putstr("(nil)"));
	charset = "0123456789abcdef";
	length = 0;
	if (p >= base)
		length += ft_putnbr_p(p / base, base);
	if (p < base)
		length += ft_putstr("0x");
	length += ft_putchar(charset[p % base]);
	return (length);
}
