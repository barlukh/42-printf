/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:04:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/11 09:05:40 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_p(uintptr_t p)
{
	int			count;

	if (p == 0)
		return (ft_putstr("(nil)"));
	count = 0;
	if (p >= BASE16)
		count += ft_putnbr_p(p / BASE16);
	if (p < BASE16)
		count += ft_putstr("0x");
	if (count == -1)
		return (-1);
	if (ft_putchar(HEX_LCASE[p % BASE16]) < 1)
		return (-1);
	count++;
	return (count);
}
