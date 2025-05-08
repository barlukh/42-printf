/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:35:10 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 16:42:00 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** Writes an unsigned integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @return Length of the integer
 */
size_t	ft_putnbr_u(unsigned int n, unsigned int base)
{
	char			*charset_choice;
	size_t			length;

	charset_choice = "0123456789";
	length = 0;
	if (n >= base)
		length += ft_putnbr_u(n / base, base);
	length += ft_putchar(charset_choice[n % base]);
	return (length);
}
