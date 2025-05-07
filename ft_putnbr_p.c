/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:04:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 14:31:13 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/** Writes a memory address of a pointer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @return Length of the integer
 */
size_t	ft_putnbr_p(uintptr_t p, size_t base)
{
	char			*charset_choice;
	size_t			length;

	charset_choice = "0123456789abcdef";
	length = 0;
	if (p >= base)
		length += ft_putnbr_u(p / base, base);
	length += ft_putchar(charset_choice[p % base]);
	return (length);
}
