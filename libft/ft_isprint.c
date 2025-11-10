/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:10:01 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 12:10:30 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	char c;
	
	c = '9';
	printf("9:   %d\n", ft_isprint(c));
	
	c = 'R';
	printf("R:   %d\n", ft_isprint(c));
	
	c = '\t';
	printf("tab: %d\n", ft_isprint(c));
	
	c = '0';
	printf("0:   %d\n", ft_isprint(c));
}*/
