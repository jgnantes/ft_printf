/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:05:35 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/14 12:05:38 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	lst = lst->next;
	temp = new;
	while (lst != NULL)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!(temp->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (new);
}

/*#include <stdio.h>
int	main(void)
{
	
}*/
