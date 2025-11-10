/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:19:09 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:16 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		i = n - 1;
		while (i + 1 > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	src1[] = "Hello, world!";
	char	dst1[20];
	char	dst2[20];

	char	src2[] = "";
	char	dst3[10];
	char	dst4[10];

	unsigned char	bin1[] = {0, 127, 128, 255};
	unsigned char	bin2[4];
	unsigned char	bin3[4];

	size_t	i;
	int		pass;

	// 1. Normal string copy
	ft_memmove(dst1, src1, strlen(src1) + 1);
	memmove(dst2, src1, strlen(src1) + 1);
	printf("Test 1: Normal string copy\n");
	printf("  ft_memmove: \"%s\"\n", dst1);
	printf("  memmove:    \"%s\"\n", dst2);
	if (strcmp(dst1, dst2) == 0)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	// 2. Empty string copy
	ft_memmove(dst3, src2, 1);
	memmove(dst4, src2, 1);
	printf("\nTest 2: Empty string copy\n");
	printf("  ft_memmove: \"%s\"\n", dst3);
	printf("  memmove:    \"%s\"\n", dst4);
	if (strcmp(dst3, dst4) == 0)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	// 3. Binary data copy
	ft_memmove(bin2, bin1, 4);
	memmove(bin3, bin1, 4);
	printf("\nTest 3: Binary data copy\n");
	printf("  ft_memmove: ");
	for (i = 0; i < 4; i++)
		printf("%u ", bin2[i]);
	printf("\n  memmove:    ");
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
	ft_memmove(dst1, src1, 0);
	memmove(dst2, src1, 0);
	printf("\nTest 4: Zero bytes copy\n");
	printf("  ft_memmove: \"%s\"\n", dst1);
	printf("  memmove:    \"%s\"\n", dst2);
	printf("  Result: ✅ (no change expected)\n");

	// 5. Large buffer copy
	char *big1 = malloc(1000);
	char *big2 = malloc(1000);
	char *big3 = malloc(1000);
	for (i = 0; i < 1000; i++)
		big1[i] = (char)(i % 256);
	ft_memmove(big2, big1, 1000);
	memmove(big3, big1, 1000);
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

	// 6. Overlapping regions - forward copy
	char overlap1[] = "1234567890";
	char overlap2[] = "1234567890";
	ft_memmove(overlap1 + 2, overlap1, 5);
	memmove(overlap2 + 2, overlap2, 5);
	printf("\nTest 6: Overlapping (forward)\n");
	printf("  ft_memmove: %s\n", overlap1);
	printf("  memmove:    %s\n", overlap2);
	if (strcmp(overlap1, overlap2) == 0)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	// 7. Overlapping regions - backward copy
	char overlap3[] = "ABCDEFGHIJ";
	char overlap4[] = "ABCDEFGHIJ";
	ft_memmove(overlap3, overlap3 + 2, 5);
	memmove(overlap4, overlap4 + 2, 5);
	printf("\nTest 7: Overlapping (backward)\n");
	printf("  ft_memmove: %s\n", overlap3);
	printf("  memmove:    %s\n", overlap4);
	if (strcmp(overlap3, overlap4) == 0)
		printf("  Result: ✅\n");
	else
		printf("  Result: ❌\n");

	return (0);
}*/
