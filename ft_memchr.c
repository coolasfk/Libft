/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:21:29 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/10/31 22:29:39 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	cc;

	if (n == 0)
		return (NULL);
	i = 0;
	cc = (unsigned char)c;
	while (i < n)
	{
		ss = (unsigned char *)s + i;
		if (*ss == cc)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
