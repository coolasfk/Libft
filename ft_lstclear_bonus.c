/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:23:18 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/09 20:01:52 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (!*lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		node = temp->next;
		ft_lstdelone(temp, del);
		temp = node;
	}
	*lst = NULL;
}
