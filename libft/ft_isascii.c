/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:46:27 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:46:29 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	char c;
	
	c = '9';
	printf("9:   %d\n", ft_isascii(c));
	
	c = 'R';
	printf("R:   %d\n", ft_isascii(c));
	
	c = '\t';
	printf("tab: %d\n", ft_isascii(c));
	
	c = '0';
	printf("0:   %d\n", ft_isascii(c));
}*/
