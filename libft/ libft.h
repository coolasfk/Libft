/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:41:50 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/10/27 20:50:27 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalnum(int num);
int					ft_isalpha(int num);
int					ft_isascii(int num);
int					ft_isdigit(int digit);
int					ft_isprint(int num);
size_t				ft_strlen(const char *str);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
