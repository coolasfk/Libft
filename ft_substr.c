/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:26:27 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/03 11:31:41 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*new;
	unsigned int	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s[i] == '\0' || start > s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	new = (char *)malloc(len * sizeof(char) + 1);
	if (!new)
		return (NULL);
	while (len > i)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
