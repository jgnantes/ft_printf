/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:42:18 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/21 11:42:48 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	char c;
	
	c = '9';
	printf("9:   %d\n", ft_isdigit(c));
	
	c = 'R';
	printf("R:   %d\n", ft_isdigit(c));
	
	c = '\t';
	printf("tab: %d\n", ft_isdigit(c));
	
	c = '0';
	printf("0:   %d\n", ft_isdigit(c));
}*/
