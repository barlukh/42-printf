/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:29 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/10 11:01:29 by bgazur           ###   ########.fr       */
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

typedef struct s_out
{
	int	err;
	int	len;
}	t_out;

/** Writes a string with format specifiers into the standard output
 * @param s String to write
 * @param ... Additional variadic arguments matching format specifiers
 * @return Number of characters printed, or -1 on error
 */
int		ft_printf(const char *s, ...);

/** Writes a charater into the standard output
 * @param c Character to write
 * @param outp err: a bool error flag, len: output length
 * @return None
 */
void	ft_putchar(int c, t_out *outp);

/** Writes a memory address of a pointer into the standard output
 * @param p Memory address to write (represented as an integer)
 * @param base Base of the integer
 * @param outp err: a bool error flag, len: output length
 * @return None
 */
void	ft_putnbr_p(uintptr_t p, size_t base, t_out *outp);

/** Writes a signed integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @param outp err: a bool error flag, len: output length
 * @return None
 */
void	ft_putnbr_s(int n, int base, t_out *outp);

/** Writes an unsigned integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @param style Style format indicator for hexadecimal letters
 * @param outp err: a bool error flag, len: output length
 * @return None
 */
void	ft_putnbr_u(unsigned int n, unsigned int base, int style, t_out *outp);

/** Writes a string into the standard output
 * @param s String to write
 * @param outp err: a bool error flag, len: output length
 * @return None
 */
void	ft_putstr(const char *s, t_out *outp);

#endif
