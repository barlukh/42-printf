/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/12 20:57:13 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_s(int n)
{
	int	count;
	int	check;

	if (n == INT_MIN)
		return (ft_putstr_m("-2147483648"));
	count = 0;
	if (n < 0)
	{
		if (ft_putchar_m('-') == -1)
			return (-1);
		count++;
		n = -n;
	}
	if (n >= BASE10)
	{
		check = ft_putnbr_s(n / BASE10);
		if (check == -1)
			return (-1);
		count += check;
	}
	if (ft_putchar_m(DECIMAL[n % BASE10]) == -1)
		return (-1);
	count++;
	return (count);
}
