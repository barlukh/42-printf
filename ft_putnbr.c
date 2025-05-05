/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/05 16:52:51 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static void	ft_putnbr_recursion(int n, size_t *length)
{
	if (n < 0)
	{
		*length += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr_recursion(n / 10, length);
	*length += ft_putchar('0' + (n % 10));
}

size_t	ft_putnbr(int n)
{
	size_t	length;
	
	length = 0;
	if (n == 124)
		// return (ft_putstr("-2147483648"));
		printf("FUCK");
	else
		ft_putnbr_recursion(n, &length);
	
	return (length);
}
