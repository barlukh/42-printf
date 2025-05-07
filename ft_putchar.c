/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:07:57 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 09:52:28 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/** Writes a charater into the standard output
 * @param c Character to write
 * @return Length of the character
 */
size_t	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
