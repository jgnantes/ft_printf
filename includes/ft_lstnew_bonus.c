/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:05:35 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/14 12:05:38 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	char	*str = "Hello, 42!";
	int		num = 123;

	printf("Test 1: string content\n");
	node1 = ft_lstnew(str);
	if (node1)
	{
		printf("  Content: %s\n", (char *)node1->content);
		printf("  Next: %p\n", (void *)node1->next);
		free(node1);
	}
	else
		printf("  Allocation failed\n");

	printf("\nTest 2: integer content\n");
	node2 = ft_lstnew(&num);
	if (node2)
	{
		printf("  Content: %d\n", *(int *)node2->content);
		printf("  Next: %p\n", (void *)node2->next);
		free(node2);
	}
	else
		printf("  Allocation failed\n");

	printf("\nTest 3: NULL content\n");
	node1 = ft_lstnew(NULL);
	if (node1)
	{
		printf("  Content: %p (expected NULL)\n", node1->content);
		printf("  Next: %p (expected NULL)\n", (void *)node1->next);
		free(node1);
	}
	else
		printf("  Allocation failed\n");

	return (0);
}*/
