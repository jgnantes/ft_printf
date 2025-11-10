/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:19:09 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:16 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char			src1[] = "Hello, world!";
	char			dst1[20];
	char			dst2[20];

	char			src2[] = "";
	char			dst3[10];
	char			dst4[10];

	unsigned char	bin1[] = {0, 127, 128, 255};
	unsigned char	bin2[4];
	unsigned char	bin3[4];

	size_t			i;
	int				pass;

	// 1. Normal string copy
	ft_memcpy(dst1, src1, strlen(src1) + 1);
	memcpy(dst2, src1, strlen(src1) + 1);
	printf("Test 1: Normal string copy\n");
	printf("  ft_memcpy:  \"%s\"\n", dst1);
	printf("  memcpy:     \"%s\"\n", dst2);
	if (strcmp(dst1, dst2) == 0)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	// 2. Empty string copy
	ft_memcpy(dst3, src2, 1);
	memcpy(dst4, src2, 1);
	printf("\nTest 2: Empty string copy\n");
	printf("  ft_memcpy:  \"%s\"\n", dst3);
	printf("  memcpy:     \"%s\"\n", dst4);
	if (strcmp(dst3, dst4) == 0)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	// 3. Binary data copy
	ft_memcpy(bin2, bin1, 4);
	memcpy(bin3, bin1, 4);
	printf("\nTest 3: Binary data copy\n");
	printf("  ft_memcpy:  ");
	for (i = 0; i < 4; i++)
		printf("%u ", bin2[i]);
	printf("\n  memcpy:     ");
	for (i = 0; i < 4; i++)
		printf("%u ", bin3[i]);
	printf("\n");
	pass = 1;
	for (i = 0; i < 4; i++)
	{
		if (bin2[i] != bin3[i])
		{
			pass = 0;
			break;
		}
	}
	if (pass)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	// 4. Zero bytes copy
	ft_memcpy(dst1, src1, 0);
	memcpy(dst2, src1, 0);
	printf("\nTest 4: Zero bytes copy\n");
	printf("  ft_memcpy:  \"%s\"\n", dst1);
	printf("  memcpy:     \"%s\"\n", dst2);
	printf("  Result: ✅ (no change expected)\n");

	// 5. Large buffer copy
	char *big1 = malloc(1000);
	char *big2 = malloc(1000);
	char *big3 = malloc(1000);
	for (i = 0; i < 1000; i++)
		big1[i] = (char)(i % 256);
	ft_memcpy(big2, big1, 1000);
	memcpy(big3, big1, 1000);
	printf("\nTest 5: Large buffer copy\n");
	pass = 1;
	for (i = 0; i < 1000; i++)
	{
		if (big2[i] != big3[i])
		{
			pass = 0;
			break;
		}
	}
	if (pass)
		printf("  Result: ✅ (buffers identical)\n");
	else
		printf("  Result: ❌ (buffers differ)\n");
	free(big1);
	free(big2);
	free(big3);

	// 6. Overlapping areas (undefined behavior)
	char overlap[] = "1234567890";
	ft_memcpy(overlap + 2, overlap, 5);
	printf("\nTest 6: Overlapping areas (undefined behavior)\n");
	printf("  ft_memcpy result: %s\n", overlap);

	return (0);
}*/
