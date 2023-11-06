/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:37:30 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/06 16:02:05 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putnbr_fd(int n, int fd)
{
	int i;
	i = 0;
	char to_write;

	if(n == -2147483648)
	{
write(fd, "-2147483648", 11);
		return;
	}
	if(n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while(n != 0)
	{
		to_write = n%10 + '0';
		write(fd, &to_write, 1);
		n /= 10;
	}
}
/*
int main(void)
{
	ft_putnbr_fd(-4433, 1);
}
*/
