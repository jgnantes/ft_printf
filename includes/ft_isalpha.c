/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:14:21 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:28:24 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	char c;
	
	c = '9';
	printf("9:   %d\n", ft_isalpha(c));
	
	c = 'R';
	printf("R:   %d\n", ft_isalpha(c));
	
	c = '\t';
	printf("tab: %d\n", ft_isalpha(c));
	
	c = '0';
	printf("0:   %d\n", ft_isalpha(c));
}*/
