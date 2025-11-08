/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:17:13 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/27 13:17:15 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>
static void add_index(unsigned int i, char *c)
{
    *c = *c + i;
}

int main(void)
{
    char str1[20] = "hello";
    char str2[20] = "abcdef";
    char str3[1] = "";
    char str4[2] = "x";

    printf("Test 1: Normal string\n");
    printf("  Before: %s\n", str1);
    ft_striteri(str1, add_index);
    printf("  After:  %s\n", str1);

    printf("\nTest 2: Another string\n");
    printf("  Before: %s\n", str2);
    ft_striteri(str2, add_index);
    printf("  After:  %s\n", str2);

    printf("\nTest 3: Empty string\n");
    printf("  Before: \"%s\"\n", str3);
    ft_striteri(str3, add_index);
    printf("  After:  \"%s\"\n", str3);

    printf("\nTest 4: Single character string\n");
    printf("  Before: %s\n", str4);
    ft_striteri(str4, add_index);
    printf("  After:  %s\n", str4);

    return 0;
}*/
