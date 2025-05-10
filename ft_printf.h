/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:29 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/10 16:44:34 by bgazur           ###   ########.fr       */
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
# define LCASE 1
# define UCASE 2
# define FALSE 0
# define TRUE 1

/** Writes a string with format specifiers into the standard output
 * @param s String to write
 * @param ... Additional variadic arguments matching format specifiers
 * @return Number of characters written, -1 on error
 */
int	ft_printf(const char *s, ...);

/** Writes a charater into the standard output
 * @param c Character to write
 * @return Number of characters written, -1 on error
 */
int	ft_putchar(int c);

/** Writes a memory address of a pointer into the standard output
 * @param p Memory address to write (represented as an integer)
 * @param base Base of the integer
 * @return Number of characters written, -1 on error
 */
int	ft_putnbr_p(uintptr_t p, size_t base);

/** Writes a signed integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @return Number of characters written, -1 on error
 */
int	ft_putnbr_s(int n, int base);

/** Writes an unsigned integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @param style Style format indicator for hexadecimal letters
 * @return Number of characters written, -1 on error
 */
int	ft_putnbr_u(unsigned int n, unsigned int base, int style);

/** Writes a string into the standard output
 * @param s String to write
 * @return Number of characters written, -1 on error
 */
int	ft_putstr(const char *s);

#endif
