/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:04:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/10 16:45:14 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_p(uintptr_t p, size_t base)
{
	const char	*charset;
	int			count;

	if (p == 0)
		return (ft_putstr("(nil)"));
	charset = "0123456789abcdef";
	count = 0;
	if (p >= base)
		count += ft_putnbr_p(p / base, base);
	if (p < base)
		count += ft_putstr("0x");
	if (count == -1)
		return (-1);
	if (ft_putchar(charset[p % base]) < 1)
		return (-1);
	count++;
	return (count);
}
