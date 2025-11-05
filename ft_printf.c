/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:14:08 by jnantes-          #+#    #+#             */
/*   Updated: 2025/11/05 15:14:12 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>

int	print_format(char print, va_list ap);

int	ft_printf(const char *format, ...)
{
	int     count;
	va_list ap;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*++format, ap);
		else
			count += ft_putchar_fdr(*format, 1);
		*format++;
	}
	va_end(ap);
	return count;
}

int print_format(char print, va_list ap)
{
	int count;

	count = 0;
	if (print == 'c')
		count += ft_putchar_fdr(va_arg(ap, int), 1);
	else if (print == 's')
		count += ft_putstr_fdr(va_arg(ap, char *, 1));
	else if (print == 'd')
		count += ft_putnbr_fdr(va_arg(ap, int), 1);
	else if (print == 'x')
		count += print_hexa((long)(va_arg(ap, unsigned int)));
	return (count);
}
