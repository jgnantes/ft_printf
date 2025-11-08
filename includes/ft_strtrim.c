/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:17:55 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 15:18:08 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;
	size_t	trim_len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && check_char(set, s1[i]))
		i++;
	while (j > i && check_char(set, s1[j - 1]))
		j--;
	trim = malloc((j - i + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	trim_len = 0;
	while (i < j)
		trim[trim_len++] = s1[i++];
	trim[trim_len] = '\0';
	return (trim);
}

/*#include <stdio.h>
int	main(void)
{
	char	*result;

	result = ft_strtrim("  \tHello World\n  ", " \t\n");
	printf("Teste 1: '%s'\n", result);
	free(result);

	result = ft_strtrim("Hello", " \t\n");
	printf("Teste 2: '%s'\n", result);
	free(result);

	result = ft_strtrim("   \n\t  ", " \n\t");
	printf("Teste 3: '%s'\n", result);
	free(result);

	result = ft_strtrim("  abc", " ");
	printf("Teste 4: '%s'\n", result);
	free(result);

	result = ft_strtrim("xyz   ", " ");
	printf("Teste 5: '%s'\n", result);
	free(result);

	result = ft_strtrim("", "");
	printf("Teste 6: '%s'\n", result);
	free(result);

	result = ft_strtrim("  abc  ", "");
	printf("Teste 7: '%s'\n", result);
	free(result);

	result = ft_strtrim("xxxtrimmedxxx", "x");
	printf("Teste 8: '%s'\n", result);
	free(result);

	printf("Teste 9a (s1 = NULL): ");
	result = ft_strtrim(NULL, " ");
	if (!result)
		printf("NULL retornado (correto)\n");
	else
	{
		printf("'%s'\n", result);
		free(result);
	}

	printf("Teste 9b (set = NULL): ");
	result = ft_strtrim("abc", NULL);
	if (!result)
		printf("NULL retornado (correto)\n");
	else
	{
		printf("'%s'\n", result);
		free(result);
	}

	return (0);
}*/

static int	check_char(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
