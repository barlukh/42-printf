/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:29 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 09:19:38 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

# define BASE10 10
# define BASE16 16
# define DIGIT 0
# define LOWERCASE 1
# define UPPERCASE 2

int		ft_printf(const char *str, ...);
size_t	ft_putchar(int c);
size_t	ft_putnbr_p(uintptr_t p, size_t base);
size_t	ft_putnbr_s(int n, int base);
size_t	ft_putnbr_u(unsigned int n, unsigned int base, int style);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

#endif
