/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:35:10 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/13 08:48:53 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n, unsigned int base, const char *style)
{
	int	count;
	int	check;

	count = 0;
	if (n >= base)
	{
		check = ft_putnbr_u(n / base, base, style);
		if (check == -1)
			return (-1);
		count += check;
	}
	if (ft_putchar_m(style[n % base]) == -1)
		return (-1);
	count++;
	return (count);
}
