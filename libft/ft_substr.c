/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:50:18 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 13:50:20 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		str = malloc(1);
	else
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		str = malloc(len + 1);
		if (!str)
			return (NULL);
		while (s[start + i] != '\0' && i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	*res;

	printf("Test 1: normal substring\n");
	res = ft_substr("Hello, world!", 7, 5);
	printf("  Result: \"%s\" (expected \"world\")\n", res);
	free(res);

	printf("\nTest 2: start beyond string length\n");
	res = ft_substr("Hello", 10, 3);
	printf("  Result: \"%s\" (expected empty string)\n", res);
	free(res);

	printf("\nTest 3: len larger than remaining chars\n");
	res = ft_substr("abcdef", 3, 10);
	printf("  Result: \"%s\" (expected \"def\")\n", res);
	free(res);

	printf("\nTest 4: len = 0\n");
	res = ft_substr("abcdef", 2, 0);
	printf("  Result: \"%s\" (expected empty string)\n", res);
	free(res);

	printf("\nTest 5: full string (start 0)\n");
	res = ft_substr("substring", 0, 9);
	printf("  Result: \"%s\" (expected \"substring\")\n", res);
	free(res);

	printf("\nTest 6: empty input string\n");
	res = ft_substr("", 0, 5);
	printf("  Result: \"%s\" (expected empty string)\n", res);
	free(res);

	printf("\nTest 7: NULL input\n");
	res = ft_substr(NULL, 0, 5);
	if (*res == '\0')
		printf("  Result: NULL (undefined but handled)\n");
	else
	{
		printf("  Result: \"%s\"\n", res);
		free(res);
	}

	return (0);
}*/
