/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:03:10 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/09 20:14:16 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		node = temp->next;
		f(temp->content);
		temp = node;
	}
}
