/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:48:37 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/03 13:15:38 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(" "));
	while (s1[start])
	{
		if (ft_strchr(set, s1[start]) == NULL)
			break ;
		start++;
	}
	end = ft_strlen(s1);
	while (end > start)
	{
		if (ft_strchr(set, s1[end - 1]) == NULL)
			break ;
		end--;
	}
	new = ft_substr(s1, start, end - start);
	return (new);
}
