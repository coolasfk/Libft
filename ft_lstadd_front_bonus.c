/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:18:02 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/09 10:40:22 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
