/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:22:43 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/11 16:22:47 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	if (n == 0)
		return (0);
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n && c1[i] == c2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)(unsigned char)c1[i] - (int)(unsigned char)c2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char		a[] = "Hello";
	char		b[] = "Hello";
	char		c[] = "Hellp";
	char		d[] = "Hel";
	char		e[] = "";
	char		f[] = "H\0llo";
	char		g[] = "H\0lpo";
	char		h[] = "\xFF";
	char		i[] = "\x01";
	unsigned char	x[] = {0, 127, 128, 255};
	unsigned char	y[] = {0, 127, 129, 254};

	printf("1: %d | %d\n", ft_memcmp(a, b, 5), memcmp(a, b, 5));
	printf("2: %d | %d\n", ft_memcmp(a, c, 5), memcmp(a, c, 5));
	printf("3: %d | %d\n", ft_memcmp(a, c, 4), memcmp(a, c, 4));
	printf("4: %d | %d\n", ft_memcmp(a, d, 5), memcmp(a, d, 5));
	printf("5: %d | %d\n", ft_memcmp(a, c, 0), memcmp(a, c, 0));
	printf("6: %d | %d\n", ft_memcmp(e, e, 5), memcmp(e, e, 5));
	printf("7: %d | %d\n", ft_memcmp(f, f, 5), memcmp(f, f, 5));
	printf("8: %d | %d\n", ft_memcmp(f, g, 5), memcmp(f, g, 5));
	printf("9: %d | %d\n", ft_memcmp(x, y, 4), memcmp(x, y, 4));
	printf("10: %d | %d\n", ft_memcmp(x, y, 2), memcmp(x, y, 2));
printf("11: %d | %d\n", ft_memcmp("abcd", "abce", 3), memcmp("abcd", "abce", 3));
	printf("12: %d | %d\n", ft_memcmp(h, i, 1), memcmp(h, i, 1));

	char	*big1;
	char	*big2;
	big1 = malloc(1000);
	big2 = malloc(1000);
	memset(big1, 'A', 1000);
	memset(big2, 'A', 1000);
	big2[999] = 'B';
printf("13: %d | %d\n", ft_memcmp(big1, big2, 1000), memcmp(big1, big2, 1000));
	free(big1);
	free(big2);
}*/
