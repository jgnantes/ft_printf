/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:54:54 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/21 13:55:06 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(char *src)
{
	size_t	length;
	char	*dest;

	if (src == 0)
		return (0);
	length = (size_t)ft_strlen(src);
	dest = malloc(length + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
    char *original1 = "Hello, world!";
    char *original2 = "";
    char *original3 = "SingleWord";
    char *original4 = NULL;

    char *copy;

    // Test 1: Normal string
    copy = ft_strdup(original1);
    printf("Test 1: Normal string\n");
    printf("  Original: \"%s\"\n", original1);
    printf("  ft_strdup: \"%s\"\n", copy);
    free(copy);

    // Test 2: Empty string
    copy = ft_strdup(original2);
    printf("\nTest 2: Empty string\n");
    printf("  Original: \"%s\"\n", original2);
    printf("  ft_strdup: \"%s\"\n", copy);
    free(copy);

    // Test 3: Single word
    copy = ft_strdup(original3);
    printf("\nTest 3: Single word\n");
    printf("  Original: \"%s\"\n", original3);
    printf("  ft_strdup: \"%s\"\n", copy);
    free(copy);

    // Test 4: NULL string
    copy = ft_strdup(original4);
    printf("\nTest 4: NULL string\n");
    if (!copy)
        printf("  ft_strdup returned NULL (correct)\n");
    else
    {
        printf("  ft_strdup: \"%s\" (ERROR)\n", copy);
        free(copy);
    }

    return 0;
}*/

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
