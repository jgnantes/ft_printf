/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:28:00 by jnantes-          #+#    #+#             */
/*   Updated: 2025/11/12 19:06:07 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fdr(char *s, int fd)
{
	int	i;

	if (s == NULL)
	{
		if (ft_putstr_fdr("(null)", fd) == -1)
			return (-1);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_putchar_fdr(s[i], fd) == -1)
			return (-1);
		i++;
	}
	return (i);
}
