/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:39:31 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/01 21:04:56 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(len * sizeof(char) + 1);
	if (!new)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		new[i] = s2[c++];
		i++;
	}
	new[i] = '\0';
	return (new);
}
