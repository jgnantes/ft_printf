/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:14:21 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:28:24 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const char	*str1 = "hello world";
	const char	*str2 = "abcabcabc";
	const char	*str3 = "no matches here";
	const char	*str4 = "";
	const char	*str5 = "ends with x";
	char		*res;

	printf("Test 1: normal string (multiple occurrences)\n");
	res = ft_strrchr(str1, 'l');
	if (res)
		printf("  ft_strrchr: '%c' at %ld → \"%s\"\n",
			'l', res - str1, res);
	else
		printf("  ft_strrchr: NULL\n");
	printf("\n");

	printf("Test 2: char appears many times\n");
	res = ft_strrchr(str2, 'a');
	if (res)
		printf("  ft_strrchr: '%c' at %ld → \"%s\"\n",
			'a', res - str2, res);
	else
		printf("  ft_strrchr: NULL\n");
	printf("\n");

	printf("Test 3: char not in string\n");
	res = ft_strrchr(str3, 'z');
	if (res)
		printf("  ft_strrchr: '%c' at %ld → \"%s\"\n",
			'z', res - str3, res);
	else
		printf("  ft_strrchr: NULL (correct)\n");
	printf("\n");

	printf("Test 4: empty string\n");
	res = ft_strrchr(str4, 'a');
	if (res)
		printf("  ft_strrchr: '%c' at %ld → \"%s\"\n",
			'a', res - str4, res);
	else
		printf("  ft_strrchr: NULL (correct)\n");
	printf("\n");

	printf("Test 5: searching for '\\0'\n");
	res = ft_strrchr(str1, '\0');
	if (res)
		printf("  ft_strrchr: '\\0' at %ld (string end)\n",
			res - str1);
	else
		printf("  ft_strrchr: NULL (wrong)\n");
	printf("\n");

	printf("Test 6: match at the end\n");
	res = ft_strrchr(str5, 'x');
	if (res)
		printf("  ft_strrchr: '%c' at %ld → \"%s\"\n",
			'x', res - str5, res);
	else
		printf("  ft_strrchr: NULL\n");

	return (0);
}*/
