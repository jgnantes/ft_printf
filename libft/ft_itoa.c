/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnantes- <jnantes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:49:06 by jnantes-          #+#    #+#             */
/*   Updated: 2025/09/15 10:50:59 by jnantes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_neg(long *n, int *is_neg, int *i);
static void	revert(char *str, int n);
static int	dec_places(long n);

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		is_neg;
	long	nbr;

	nbr = (long)n;
	i = dec_places(nbr);
	check_neg(&nbr, &is_neg, &i);
	result = malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	if (nbr == 0)
		result[i++] = '0';
	while (nbr > 0)
	{
		result[i++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (is_neg)
		result[i++] = '-';
	revert(result, i);
	result[i] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str;

	// 1. Zero
	str = ft_itoa(0);
	printf("Test 1 (0): '%s'\n", str);
	free(str);

	// 2. Small positive number
	str = ft_itoa(42);
	printf("Test 2 (42): '%s'\n", str);
	free(str);

	// 3. Small negative number
	str = ft_itoa(-42);
	printf("Test 3 (-42): '%s'\n", str);
	free(str);

	// 4. Multi-digit positive number
	str = ft_itoa(123456789);
	printf("Test 4 (123456789): '%s'\n", str);
	free(str);

	// 5. Multi-digit negative number
	str = ft_itoa(-987654321);
	printf("Test 5 (-987654321): '%s'\n", str);
	free(str);

	// 6. INT_MAX
	str = ft_itoa(INT_MAX);
	printf("Test 6: '%s'\n", INT_MAX, str);
	free(str);

	// 7. INT_MIN
	str = ft_itoa(INT_MIN);
	printf("Test 7: '%s'\n", INT_MIN, str);
	free(str);

	// 8. Single-digit negative number
	str = ft_itoa(-7);
	printf("Test 8 (-7): '%s'\n", str);
	free(str);

	// 9. Large but valid positive number
	str = ft_itoa(1000000000);
	printf("Test 9 (1000000000): '%s'\n", str);
	free(str);

	return (0);
}*/

static void	check_neg(long *n, int *is_neg, int *i)
{
	if (*n < 0)
	{
		*n = -(*n);
		*is_neg = 1;
		(*i)++;
	}
	else
		*is_neg = 0;
}

static void	revert(char *str, int i)
{
	int		j;
	char	temp;

	j = 0;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		j++;
		i--;
	}
}

static int	dec_places(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
