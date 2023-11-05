/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:13:39 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/05 16:50:30 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			word_count++;
		i++;
	}
	return (word_count);
}

char	**populate_split(char const *s, char c, int word_count, char **split)
{
	int	i;
	int	start;

	i = 0;
	start = -1;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start++;
		}
		if ((s[i + 1] == c && start != -1) || (s[i + 1] == '\0' && start != -1))
		{
			split[word_count++] = ft_substr(s, i - start, start + 1);
			start = -1;
		}
		i++;
	}
	split[word_count] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**split;

	word_count = count_words(s, c);
	split = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = populate_split(s, c, word_count, split);
	return (split);
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	printf("S: %s", *ft_split(argv[1], *argv[2]));
}

*/
