/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:28:00 by jnantes-          #+#    #+#             */
/*   Updated: 2025/10/27 13:28:54 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsnbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putunsnbr_fd(n / 10, fd);
	ft_putchar_fd((char)((n % 10) + '0'), fd);
}
