/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:14:30 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/10/26 12:40:14 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int num)
{
	return ((num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z'));
}

int	main(void)
{
	printf("r: %d", ft_isalpha(77));
}
