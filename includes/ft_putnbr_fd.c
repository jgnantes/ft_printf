/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:28:00 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/27 13:28:54 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;
	char	number;

	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = -long_n;
	}
	if (long_n >= 10)
		ft_putnbr_fd((int)(long_n / 10), fd);
	number = 48 + (char)(int)(long_n % 10);
	write(fd, &number, 1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("Test 1: Positive number\nExpected: 12345\nOutput:   ");
	fflush(stdout);
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);

	printf("\nTest 2: Negative number\nExpected: -6789\nOutput:   ");
	fflush(stdout);
	ft_putnbr_fd(-6789, 1);
	write(1, "\n", 1);

	printf("\nTest 3: Zero\nExpected: 0\nOutput:   ");
	fflush(stdout);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);

	printf("\nTest 4: INT_MAX\nExpected: %d\nOutput:   ", INT_MAX);
	fflush(stdout);
	ft_putnbr_fd(INT_MAX, 1);
	write(1, "\n", 1);

	printf("\nTest 5: INT_MIN\nExpected: %d\nOutput:   ", INT_MIN);
	fflush(stdout);
	ft_putnbr_fd(INT_MIN, 1);
	write(1, "\n", 1);

	printf("\nTest 6: Single digit numbers\nExpected: 7 -3\nOutput:   ");
	fflush(stdout);
	ft_putnbr_fd(7, 1);
	write(1, " ", 1);
	ft_putnbr_fd(-3, 1);
	write(1, "\n", 1);

	return (0);
}*/
