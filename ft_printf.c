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

static int	print_format(char print, va_list ap);
static int	print_hexa(unsigned long n, char specifier);
static int	ft_putunsnbr_fdr(unsigned int n, int fd);

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			count += print_format(format[++i], ap);
		else
			count += ft_putchar_fdr(format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	char c = 'A';
	int n = -20;

	ft_printf("FT Decimal: %d\n", n);
	printf("OG Decimal: %d\n", n);

	ft_printf("FT Integer: %i\n", n);
	printf("OG Integer: %i\n", n);

	ft_printf("FT Unsigned: %u\n", n);
	printf("OG Unsigned: %u\n", n);

	ft_printf("FT Hexadecimal lowercase: %x\n", n);
	printf("OG Hexadecimal lowercase: %x\n", n);

	ft_printf("FT Hexadecimal uppercase: %X\n", n);
	printf("OG Hexadecimal uppercase: %X\n", n);

	ft_printf("FT Pointer: %p\n", &n);
	printf("OG Pointer: %p\n", &n);

	ft_printf("FT Character: %c\n", c);
	printf("OG Character: %c\n", c);

	ft_printf("FT String: %s\n", "Sample string");
	printf("OG String: %s\n", "Sample string");

	ft_printf("FT Percent sign: %%\n");
	printf("OG Percent sign: %%\n\n");

	int i = ft_printf("Here are 23 characters\n");
	ft_printf("FT Count %d\n", i);
	printf("OG Count %d\n\n", i);

	char *ptr = NULL;
	ft_printf("FT Pointer NULL: %p\n", ptr);
	printf("OG Pointer NULL: %p\n", ptr);
	ft_printf("FT String NULL: %s\n", ptr);
	printf("OG String NULL: %s\n", ptr);

	//ft_printf("Percent test 100%     \n");
	//printf("Percent test 100%     \n");

	return (0);
}*/

static int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fdr(va_arg(ap, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fdr(va_arg(ap, char *), 1);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_fdr(va_arg(ap, int), 1);
	else if (specifier == 'u')
		count += ft_putunsnbr_fdr(va_arg(ap, unsigned int), 1);
	else if (specifier == 'x' || specifier == 'X')
		count += print_hexa((va_arg(ap, unsigned long)), specifier);
	else if (specifier == 'p')
		count += print_hexa((uintptr_t)(va_arg(ap, void *)), specifier);
	else if (specifier == '%')
		count += ft_putchar_fdr('%', 1);
	return (count);
}

static int	print_hexa(unsigned long n, char specifier)
{
	int		count;
	char	*digits;

	count = 0;
	if (specifier == 'p')
	{
		if (n == 0)
			return (ft_putstr_fdr("(nil)", 1));
		count += ft_putstr_fdr("0x", 1);
		specifier = 'x';
	}
	else if (specifier == 'X')
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (n < 16)
		count += ft_putchar_fdr(digits[n], 1);
	else
	{
		count += print_hexa(n / 16, specifier);
		count += ft_putchar_fdr(digits[n % 16], 1);
	}
	return (count);
}

static int	ft_putunsnbr_fdr(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunsnbr_fdr(n / 10, fd);
	count += ft_putchar_fdr((char)((n % 10) + '0'), fd);
	return (count);
}
