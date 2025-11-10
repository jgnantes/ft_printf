/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:22:43 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/11 16:22:47 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "Hello World";
	char str2[] = "Hello Water";
	int testcpy;

	testcpy = ft_strncmp(str1, str2, 7);
	printf("%d \n", testcpy);
	
	char str3[] = "Hello World";
	char str4[] = "Hello Water";
	int testorg;
	
	testorg = strncmp(str3, str4, 7);
	printf("%d \n", testorg);
}
*/
