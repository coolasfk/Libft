/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:50:07 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/09 22:07:56 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	count(int n)
{
	int	i;
	int	c;

	c = n;
	i = 0;
	if (n < 0)
		i = 1;
	while (c != 0)
	{
		c /= 10;
		i++;
	}
	if (n == 0)
		i = 1;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		minus;
	char	*it;

	i = count(n);
	minus = 0;
	if (n < 0)
		minus = 1;
	it = (char *)malloc((i + 1) * sizeof(char));
	if (!it)
		return (NULL);
	it[i--] = '\0';
	while (i >= 0)
	{
		if (n < 0)
			it[i--] = (n % 10) * -1 + 48;
		if (n >= 0)
			it[i--] = (n % 10) + 48;
		n /= 10;
	}
	if (minus == 1)
		it[0] = '-';
	return (it);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", ft_itoa(atoi(argv[1])));
}
*/
