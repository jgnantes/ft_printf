/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:59:30 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/08 19:03:06 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*mem;
	size_t	mem_size;

	mem_size = size * nmeb;
	if ((nmeb != 0 && size > SIZE_MAX / nmeb)
		|| (size != 0 && nmeb > SIZE_MAX / size))
		return (NULL);
	mem = malloc(mem_size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, mem_size);
	return (mem);
}

/*#include <stdio.h>
int	main(void)
{
	void	*ptr;
	size_t	n;
	size_t	size;

	// 1. Normal case: 5 integers initialized to 0
	n = 5;
	size = sizeof(int);
	ptr = ft_calloc(n, size);
	if (ptr)
	{
		printf("Test 1: success, memory allocated and zeroed:\n");
		for (size_t i = 0; i < n; i++)
			printf("%d ", ((int *)ptr)[i]);
		printf("\n");
		free(ptr);
	}
	else
		printf("Test 1: unexpected failure\n");

	// 2. nmeb = 0, size > 0
	ptr = ft_calloc(0, 10);
	printf("Test 2: n=0, size=10 -> return: %p\n", ptr);
	free(ptr);

	// 3. size = 0, nmeb > 0
	ptr = ft_calloc(10, 0);
	printf("Test 3: n=10, size=0 -> return: %p\n", ptr);
	free(ptr);

	// 4. Both zero
	ptr = ft_calloc(0, 0);
	printf("Test 4: n=0, size=0 -> return: %p\n", ptr);
	free(ptr);

	// 5. Intentional overflow — should return NULL
	ptr = ft_calloc(SIZE_MAX, 2);
	printf("Test 5: expected overflow (SIZE_MAX,2) -> return: %p\n", ptr);

	// 6. Reverse overflow (switching order)
	ptr = ft_calloc(2, SIZE_MAX);
	printf("Test 6: expected overflow (2,SIZE_MAX) -> return: %p\n", ptr);

	// 7. Large (but feasible) allocation
	ptr = ft_calloc(1000000, 1);
	if (ptr)
	{
		printf("Test 7: large allocation succeeded (1MB)\n");
		free(ptr);
	}
	else
		printf("Test 7: allocation failed (may occur due to lack of memory)\n");

	return (0);
}*/
