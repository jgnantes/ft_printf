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
static int	print_hexa(unsigned long n, int upper);
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

#include <stdio.h>
int	main(void)
{
	
	char *str = NULL;
	char c = '\0';
	int n = -20;
	ft_printf("int n = -20\n\n");
	ft_printf("Decimal: %d\n", n);
	printf("Decimal: %d\n", n);
	ft_printf("Integer: %i\n", n);
	printf("Integer: %i\n", n);
	ft_printf("Unsigned: %u\n", n);
	printf("Unsigned: %u\n", n);
	ft_printf("Hexadecimal lowercase: %x\n", n);
	printf("Hexadecimal lowercase: %x\n", n);
	ft_printf("Hexadecimal uppercase: %X\n", n);
	printf("Hexadecimal uppercase: %X\n", n);
	ft_printf("Pointer: %p\n", &n);
	printf("Pointer: %p\n", &n);
	ft_printf("Character: %c\n", c);
	printf("Character: %c\n", c);
	ft_printf("String: %s\n", str);
	printf("String: %s\n", str);
	ft_printf("Percent sign: %%\n");
	printf("Percent sign: %%\n\n");

	int i = ft_printf("Here are 23 characters\n");
	ft_printf("%d\n", i);
	printf("%d\n\n", i);

	char *ptr = NULL;
	ft_printf("Pointer NULL: %p\n", ptr);
	printf("Pointer NULL: %p\n", ptr);

	//ft_printf("Percent test 100%     \n");
	//printf("Percent test 100%     \n");

	return (0);
}

static int	print_format(char print, va_list ap)
{
	int	count;

	count = 0;
	if (print == 'c')
		count += ft_putchar_fdr(va_arg(ap, int), 1);
	else if (print == 's' || print == 'c')
		count += ft_putstr_fdr(va_arg(ap, char *), 1);
	else if (print == 'd' || print == 'i')
		count += ft_putnbr_fdr(va_arg(ap, int), 1);
	else if (print == 'u')
		count += ft_putunsnbr_fdr(va_arg(ap, unsigned int), 1);
	else if (print == 'x')
		count += print_hexa((unsigned long)(va_arg(ap, unsigned int)), 0);
	else if (print == 'X')
		count += print_hexa((unsigned long)(va_arg(ap, unsigned int)), 1);
	else if (print == 'p')
	{
		//if (va_arg(ap, void *) == NULL)
		//	count += ft_putstr_fdr("(nil)", 1);
		count += ft_putstr_fdr("0x", 1);
		count += print_hexa((uintptr_t)(va_arg(ap, void *)), 0);
	}
	else if (print == '%')
		count += ft_putchar_fdr('%', 1);
	return (count);
}

static int	print_hexa(unsigned long n, int upper)
{
	int			count;
	char	*digits;

	if (upper == 1)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	count = 0;
	if (n < 16)
		count += ft_putchar_fdr(digits[n], 1);
	else
	{
		count += print_hexa(n / 16, upper);
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
	count += ft_putchar_fdr((n % 10) + '0', fd);
	return (count);
}