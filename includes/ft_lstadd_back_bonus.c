/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:05:35 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/14 12:05:38 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
		return (1);

	node1->content = "First";
	node1->next = NULL;

	node2->content = "Second";
	node2->next = NULL;

	node3->content = "Third";
	node3->next = NULL;

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	t_list *tmp = list;
	while (tmp)
	{
		printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("NULL\n");

	// Free memory
	tmp = list;
	while (tmp)
	{
		t_list *next = tmp->next;
		free(tmp);
		tmp = next;
	}

	return (0);
}*/
