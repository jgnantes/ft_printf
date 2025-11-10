/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:30:36 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:30:40 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int i = 0;
	char s[] = "eh_oh.jpg";
	
	printf("string = %s\n", s);
	while (s[i])
	{
		printf("s[%d] = %c\n", i, s[i]);
		i++;
	}
	
	ft_bzero(s, i - 5);
	
	printf("\n");
	printf("After ft_bzero (n = 4)\n");
	int j = 0;
	while (j < i)
	{
		printf("s[%d] = %c\n", j, s[j]);
		j++;
	}
}*/
