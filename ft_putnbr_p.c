/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:04:20 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 12:22:10 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_p(uintptr_t p, size_t base, int *len, int *err)
{
	char	*charset;

	if (p == 0)
		ft_putstr("(nil)", len, err);
	charset = "0123456789abcdef";
	if (p >= base)
		ft_putnbr_p(p / base, base, len, err);
	if (p < base)
		ft_putstr("0x", len, err);
	ft_putchar(charset[p % base], len, err);
}
