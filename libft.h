/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:41:50 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/01 14:12:06 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

int					ft_isalnum(int num);
int					ft_isalpha(int num);
int					ft_isascii(int num);
int					ft_isdigit(int digit);
int					ft_isprint(int num);
size_t				ft_strlen(const char *str);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_strlcpy(char *dst, char *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcat(char *s1, const char *s2, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *s);

#endif
