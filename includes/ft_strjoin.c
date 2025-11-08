/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:44:10 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 14:44:12 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}

/*#include <stdio.h>
int main(void)
{
    char *s1;
    char *s2;
    char *result;

    // Test 1: Normal strings
    s1 = "Hello, ";
    s2 = "world!";
    result = ft_strjoin(s1, s2);
    printf("Test 1: Normal strings\n");
    printf("  s1: \"%s\"\n", s1);
    printf("  s2: \"%s\"\n", s2);
    printf("  ft_strjoin: \"%s\"\n", result);
    free(result);

    // Test 2: Empty first string
    s1 = "";
    s2 = "world!";
    result = ft_strjoin(s1, s2);
    printf("\nTest 2: Empty first string\n");
    printf("  s1: \"%s\"\n", s1);
    printf("  s2: \"%s\"\n", s2);
    printf("  ft_strjoin: \"%s\"\n", result);
    free(result);

    // Test 3: Empty second string
    s1 = "Hello, ";
    s2 = "";
    result = ft_strjoin(s1, s2);
    printf("\nTest 3: Empty second string\n");
    printf("  s1: \"%s\"\n", s1);
    printf("  s2: \"%s\"\n", s2);
    printf("  ft_strjoin: \"%s\"\n", result);
    free(result);

    // Test 4: Both strings empty
    s1 = "";
    s2 = "";
    result = ft_strjoin(s1, s2);
    printf("\nTest 4: Both strings empty\n");
    printf("  s1: \"%s\"\n", s1);
    printf("  s2: \"%s\"\n", s2);
    printf("  ft_strjoin: \"%s\"\n", result);
    free(result);

    return 0;
}*/
