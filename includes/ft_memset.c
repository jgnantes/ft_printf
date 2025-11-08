/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:19:09 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:16 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	char	str1[20] = "Hello, world!";
	char	str2[20] = "Hello, world!";
	char	str3[20] = "ABCDEFGHIJKLMNO";
	char	str4[20] = "ABCDEFGHIJKLMNO";

	unsigned char bin1[10];
	unsigned char bin2[10];
	size_t	i;
	int		pass;

	// 1. Normal fill
	ft_memset(str1 + 7, '*', 5);
	memset(str2 + 7, '*', 5);
	printf("Test 1: Normal fill\n");
	printf("  ft_memset: \"%s\"\n", str1);
	printf("  memset:    \"%s\"\n", str2);
	if (strcmp(str1, str2) == 0)
		printf("  Result: OK\n");
	else
		printf("  Result: KO\n");

	// 2. Fill with '\0' (zero fill)
	ft_memset(str3 + 5, '\0', 3);
	memset(str4 + 5, '\0', 3);
	printf("\nTest 2: Fill with '\\0'\n");
	printf("  ft_memset (bytes): ");
	for (i = 0; i < 15; i++)
		printf("%d ", (unsigned char)str3[i]);
	printf("\n  memset (bytes):    ");
	for (i = 0; i < 15; i++)
		printf("%d ", (unsigned char)str4[i]);
	printf("\n");
	if (memcmp(str3, str4, 15) == 0)
		printf("  Result: OK\n");
	else
		printf("  Result: KO\n");

	// 3. Fill entire string
	ft_memset(str1, '#', sizeof(str1) - 1);
	memset(str2, '#', sizeof(str2) - 1);
	str1[sizeof(str1) - 1] = '\0';
	str2[sizeof(str2) - 1] = '\0';
	printf("\nTest 3: Fill entire string\n");
	printf("  ft_memset: \"%s\"\n", str1);
	printf("  memset:    \"%s\"\n", str2);
	if (strcmp(str1, str2) == 0)
		printf("  Result: OK\n");
	else
		printf("  Result: KO\n");

	// 4. Fill binary data
	ft_memset(bin1, 255, sizeof(bin1));
	memset(bin2, 255, sizeof(bin2));
	printf("\nTest 4: Binary data fill (255)\n");
	pass = 1;
	for (i = 0; i < sizeof(bin1); i++)
	{
		if (bin1[i] != bin2[i])
		{
			pass = 0;
			break;
		}
	}
	printf("  ft_memset: ");
	for (i = 0; i < sizeof(bin1); i++)
		printf("%u ", bin1[i]);
	printf("\n  memset:    ");
	for (i = 0; i < sizeof(bin2); i++)
		printf("%u ", bin2[i]);
	printf("\n");
	if (pass)
		printf("  Result: OK\n");
	else
		printf("  Result: KO\n");

	// OK 5. Zero length fill
	strcpy(str1, "Hello");
	strcpy(str2, "Hello");
	ft_memset(str1, 'A', 0);
	memset(str2, 'A', 0);
	printf("\nTest 5: Zero length fill\n");
	printf("  ft_memset: \"%s\"\n", str1);
	printf("  memset:    \"%s\"\n", str2);
	printf("  Result: OK (no change expected)\n");

	// 6. Fill with negative value
	ft_memset(bin1, -1, 5);
	memset(bin2, -1, 5);
	printf("\nTest 6: Fill with negative value (-1)\n");
	printf("  ft_memset: ");
	for (i = 0; i < 5; i++)
		printf("%u ", bin1[i]);
	printf("\n  memset:    ");
	for (i = 0; i < 5; i++)
		printf("%u ", bin2[i]);
	printf("\n");
	pass = 1;
	for (i = 0; i < 5; i++)
	{
		if (bin1[i] != bin2[i])
		{
			pass = 0;
			break;
		}
	}
	if (pass)
		printf("  Result: OK\n");
	else
		printf("  Result: KO\n");

	return (0);
}*/
