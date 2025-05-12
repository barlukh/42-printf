/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:04:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/12 20:53:32 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_p(uintptr_t p)
{
	int	count;
	int	check;

	if (p == 0)
		return (ft_putstr_m("(nil)"));
	count = 0;
	if (p < BASE16)
	{
		check = ft_putstr_m("0x");
		if (check == -1)
			return (-1);
		count += check;
	}
	if (p >= BASE16)
	{
		check = ft_putnbr_p(p / BASE16);
		if (check == -1)
			return (-1);
		count += check;
	}
	if (ft_putchar_m(HEX_LCASE[p % BASE16]) == -1)
		return (-1);
	count++;
	return (count);
}
