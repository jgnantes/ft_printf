/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:15:27 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/27 12:19:27 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc ((ft_strlen(s) + 1) * sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
static char add_index(unsigned int i, char c)
{
    return c + i;
}

int main(void)
{
    char *result;

    // Test 1: normal string
    result = ft_strmapi("abcd", add_index);
    printf("Test 1: normal string\n");
    if (result)
    {
        printf("  Result: \"%s\"\n", result);
        free(result);
    }
    else
        printf("  Returned NULL\n");

    // Test 2: empty string
    result = ft_strmapi("", add_index);
    printf("\nTest 2: empty string\n");
    if (result)
    {
        printf("  Result: \"%s\"\n", result);
        free(result);
    }
    else
        printf("  Returned NULL\n");

    // Test 3: string with spaces and punctuation
    result = ft_strmapi("Hello, World!", add_index);
    printf("\nTest 3: string with spaces/punctuation\n");
    if (result)
    {
        printf("  Result: \"%s\"\n", result);
        free(result);
    }
    else
        printf("  Returned NULL\n");

    // Test 4: NULL string
    result = ft_strmapi(NULL, add_index);
    printf("\nTest 4: NULL string\n");
    if (!result)
        printf("  Returned NULL (correct)\n");
    else
    {
        printf("  Error: should be NULL\n");
        free(result);
    }

    return 0;
}*/
