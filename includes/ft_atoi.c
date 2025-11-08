/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:49:06 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/15 10:50:59 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	integer;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	integer = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		integer = (integer * 10) + (str[i] - '0');
		i++;
	}
	if (j == 1)
		sign = -1;
	return (integer * sign);
}

/*#include <stdio.h>
int	main(void)
{
	int i;
	
	char *str1 = "1234t567";
	i = ft_atoi(str1);
	printf("FT: %d\n", i);
	i = atoi(str1);
	printf("OG: %d\n", i);
	
	char *str2 = "-42";
	i = ft_atoi(str2);
	printf("FT: %d\n", i);
	i = atoi(str2);
	printf("OG: %d\n", i);
	
	char *str3 = "0";
	i = ft_atoi(str3);
	printf("FT: %d\n", i);
	i = atoi(str3);
	printf("OG: %d\n", i);
}*/
