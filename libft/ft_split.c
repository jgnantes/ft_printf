/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:07:27 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/24 17:07:34 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_i_count(char const *str, char c, size_t *i);
static char		*ft_strndup(char const *src, size_t n);
static char		**free_array(char **arr, size_t i);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	split = malloc((str_i_count(s, c, &i) + 1) * sizeof (char *));
	if (!split)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		split[i++] = ft_strndup((char *)s, j);
		if (!split[i - 1])
			return (free_array(split, i));
		s = s + j;
	}
	split[i] = NULL;
	return (split);
}

/*#include <stdio.h>
int main(void)
{
    char **result;
    int i;

    printf("Test 1: Normal string\n");
    result = ft_split("one two three", ' ');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    printf("\nTest 2: Multiple delimiters\n");
    result = ft_split("   one  two   three   ", ' ');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    printf("\nTest 3: Empty string\n");
    result = ft_split("", ' ');
    if (!result)
        printf("Returned NULL\n");
    else
    {
        printf("(empty array)\n");
        free(result);
    }

    printf("\nTest 4: Delimiters only\n");
    result = ft_split("     ", ' ');
    if (!result)
        printf("Returned NULL\n");
    else
    {
        printf("(empty array)\n");
        free(result);
    }

    printf("\nTest 5: No delimiters\n");
    result = ft_split("singleword", ' ');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    printf("\nTest 6: NULL string\n");
    result = ft_split(NULL, ' ');
    if (!result)
        printf("Returned NULL (correct)\n");
    else
        printf("ERROR: Should return NULL\n");

    printf("\nTest 7: '\\0' as delimiter\n");
    result = ft_split("abc", '\0');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    printf("\nTest 8: Delimiter at the beginning\n");
    result = ft_split(" test", ' ');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    printf("\nTest 9: Delimiter at the end\n");
    result = ft_split("finally ", ' ');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    printf("\nTest 10: Repeated delimiter\n");
    result = ft_split("a,b,,c", ',');
    i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("[%s]\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Returned NULL\n");

    return 0;
}*/

static size_t	str_i_count(char const *str, char c, size_t *i)
{
	int	count;
	int	in_word;

	*i = 0;
	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*ft_strndup(char const *src, size_t n)
{
	char	*dest;
	size_t	i;

	dest = malloc((n + 1) * sizeof (char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = (char)src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**free_array(char **arr, size_t i)
{
	if (arr)
	{
		while (i > 0)
		{
			free(arr[i]);
			i--;
		}
		free(arr);
	}
	return (NULL);
}
