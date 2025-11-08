/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:28:00 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/27 13:28:54 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fdr(int n, int fd)
{
	long	long_n;
	char	number;
	int	count;

	long_n = n;
	count = 0;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
		count++;
	}
	if (long_n >= 10)
		count += ft_putnbr_fdr((int)(long_n / 10), fd);
	number = 48 + (char)(int)(long_n % 10);
	write(fd, &number, 1);
	count++;
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	int i = ft_putnbr_fdr(-4223634, 1);
	printf("\n%d", i);
	return (0);
}*/
