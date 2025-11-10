/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:19:09 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:16 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const char	str1[] = "Hello, world!";
	const char	str2[] = {0x00, 0x01, 0x02, 0x03, 0x04};
	char		*res;

	// 1. Normal case
	res = ft_memchr(str1, 'w', strlen(str1));
	printf("Test 1 (find 'w' in \"%s\"): ", str1);
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	// 2. Character not found
	res = ft_memchr(str1, 'x', strlen(str1));
	printf("Test 2 (find 'x' in \"%s\"): ", str1);
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	// 3. Search limited range (should not find 'w' because n is small)
	res = ft_memchr(str1, 'w', 5);
	printf("Test 3 (find 'w' in first 5 bytes): ");
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	// 4. Character found at the first position
	res = ft_memchr(str1, 'H', strlen(str1));
	printf("Test 4 (find 'H' at start): ");
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	// 5. Character found at the last position
	res = ft_memchr(str1, '!', strlen(str1));
	printf("Test 5 (find '!' at end): ");
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	// 6. Search with n = 0 (should always return NULL)
	res = ft_memchr(str1, 'H', 0);
	printf("Test 6 (n = 0): ");
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	// 7. Search for a null byte inside the string
	res = ft_memchr(str1, '\0', strlen(str1) + 1);
	printf("Test 7 (find null terminator): ");
	if (res != NULL)
		printf("(found)\n");
	else
		printf("(not found)\n");

	// 8. Binary data — searching for a specific byte value
	res = ft_memchr(str2, 0x03, sizeof(str2));
	printf("Test 8 (find 0x03 in binary data): ");
	if (res != NULL)
		printf("(found)\n");
	else
		printf("(not found)\n");

	// 9. Value larger than 255 — should be treated as unsigned
	res = ft_memchr(str1, 300, strlen(str1));
	printf("Test 9 (find 300 -> '0x2C' or ','): ");
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("(not found)\n");

	return (0);
}*/
