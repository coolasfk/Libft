/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:42:40 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/10/27 17:23:53 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = b;
	while (len > i)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
/*
int	main(void)
{
	char	str[] = "hello";

	ft_memset(str, 'r', 3);
}
*/
