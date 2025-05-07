/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:36:18 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 11:26:07 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
int n = 255;
	printf("%d\n", printf("%X\n", n));
	ft_printf("%d\n", ft_printf("%X\n", n));
	return (0);
}
