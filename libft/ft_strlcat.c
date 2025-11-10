/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:05:35 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/14 12:05:38 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	if (dest_len == size)
		return (size + src_len);
	i = dest_len;
	while (src[i - dest_len] != '\0' && i < size - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*#include <stdio.h>
int main(void)
{
    char dest1[20] = "Hello";
    char dest2[5]  = "1234";
    char dest3[20] = "";
    char dest4[10] = "123";
    char dest5[15] = "Hi";
    char *src;

    size_t res;

    // Test 1: Normal concatenation
    src = ", world!";
    res = ft_strlcat(dest1, src, sizeof(dest1));
    printf("Test 1: Normal concatenation\n");
    printf("  Result: %zu, dest: \"%s\"\n", res, dest1);

    // Test 2: Size smaller than dest length
    src = "abc";
    res = ft_strlcat(dest2, src, 3);
    printf("\nTest 2: Size smaller than dest length\n");
    printf("  Result: %zu, dest: \"%s\"\n", res, dest2);

    // Test 3: Empty dest
    src = "abc";
    res = ft_strlcat(dest3, src, sizeof(dest3));
    printf("\nTest 3: Empty dest\n");
    printf("  Result: %zu, dest: \"%s\"\n", res, dest3);

    // Test 4: Zero size
    src = "abc";
    res = ft_strlcat(dest4, src, 0);
    printf("\nTest 4: Zero size\n");
    printf("  Result: %zu, dest: \"%s\"\n", res, dest4);

    // Test 5: Size exactly enough for dest + src
    src = " there!";
    res = ft_strlcat(dest5, src, sizeof(dest5));
    printf("\nTest 5: Size exactly enough\n");
    printf("  Result: %zu, dest: \"%s\"\n", res, dest5);

    return 0;
}*/
