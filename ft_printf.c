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

#include "includes/libft.h"
#include <stdarg.h>

int	print_format(char print, va_list ap);

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, format);
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			count += print_format(format[++i], ap);
		else
			count += ft_putchar_fdr(format[++i], 1);
		i++;
	}
	
	va_end(ap);
	return (count);
}

/*int	main(void)
{
	char c = 'c'; //1
	char *s = "palavras"; //8
	int n = -42; //3
	int i = ft_printf("char: %c\nstring: %s\ninteger: %d\n", c, s, n);
	ft_printf("%d\n", i);
}*/

int	print_format(char print, va_list ap)
{
	int	count;

	count = 0;
	if (print == 'c')
		count += ft_putchar_fdr(va_arg(ap, int), 1);
	else if (print == 's')
		count += ft_putstr_fdr(va_arg(ap, char *), 1);
	else if (print == 'd')
		count += ft_putnbr_fdr(va_arg(ap, int), 1);
	//else if (print == 'x')
	//	count += print_hexa((long)(va_arg(ap, unsigned int)));
	return (count);
}
