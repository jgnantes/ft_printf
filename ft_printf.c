/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:14:08 by jnantes-          #+#    #+#             */
/*   Updated: 2025/11/10 16:58:00 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	print_format(char print, va_list ap);
static int	print_hexa(unsigned long long n, char specifier);

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

static int	print_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_putchar_fdr(va_arg(ap, int), 1);
	else if (spec == 's')
		count += ft_putstr_fdr(va_arg(ap, char *), 1);
	else if (spec == 'd' || spec == 'i')
		count += ft_putnbr_fdr(va_arg(ap, int), 1);
	else if (spec == 'u')
		count += ft_putunsnbr_fdr(va_arg(ap, unsigned int), 1);
	else if (spec == 'x' || spec == 'X')
		count += print_hexa(va_arg(ap, unsigned int), spec);
	else if (spec == 'p')
		count += print_hexa((unsigned long long)(va_arg(ap, void *)), spec);
	else if (spec == '%')
		count += ft_putchar_fdr('%', 1);
	return (count);
}

static int	print_hexa(unsigned long long n, char spec)
{
	int		count;
	char	*digits;

	count = 0;
	if (spec == 'p')
	{
		if (n == 0)
			return (ft_putstr_fdr("(nil)", 1));
		count += ft_putstr_fdr("0x", 1);
		spec = 'x';
	}
	if (spec == 'x')
		digits = "0123456789abcdef";
	else if (spec == 'X')
		digits = "0123456789ABCDEF";
	if (n < 16)
		count += ft_putchar_fdr(digits[n], 1);
	else
	{
		count += print_hexa(n / 16, spec);
		count += ft_putchar_fdr(digits[n % 16], 1);
	}
	return (count);
}
