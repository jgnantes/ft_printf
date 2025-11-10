/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:14:21 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:28:24 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>
int main(void)
{
    const char *str = "hello world";
    char *res;

    // Test 1: Character exists in the string
    res = ft_strchr(str, 'w');
    printf("Test 1: Search 'w'\n");
    printf("  ft_strchr: %s\n", res);
    res = strchr(str, 'w');
    printf("  strchr:    %s\n", res);

    // Test 2: Character does not exist
    res = ft_strchr(str, 'z');
    printf("\nTest 2: Search 'z'\n");
    printf("  ft_strchr: %s\n", res ? res : "NULL");
    res = strchr(str, 'z');
    printf("  strchr:    %s\n", res ? res : "NULL");

    // Test 3: Search for null terminator
    res = ft_strchr(str, '\0');
    printf("\nTest 3: Search '\\0'\n");
    printf("  ft_strchr: %s\n", res);
    res = strchr(str, '\0');
    printf("  strchr:    %s\n", res);

    // Test 4: First character of the string
    res = ft_strchr(str, 'h');
    printf("\nTest 4: Search first character 'h'\n");
    printf("  ft_strchr: %s\n", res);
    res = strchr(str, 'h');
    printf("  strchr:    %s\n", res);

    // Test 5: Last character of the string
    res = ft_strchr(str, 'd');
    printf("\nTest 5: Search last character 'd'\n");
    printf("  ft_strchr: %s\n", res);
    res = strchr(str, 'd');
    printf("  strchr:    %s\n", res);

    return 0;
}*/
