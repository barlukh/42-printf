/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:36:18 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 15:52:29 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
int n = -42;
int *p = &n;
	printf("%d\n", printf("%p\n", p));
	ft_printf("%d\n", ft_printf("%p\n", p));
	return (0);
}
