/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeelbored <ifeelbored@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:59:08 by jahuang           #+#    #+#             */
/*   Updated: 2022/03/23 21:35:37 by ifeelbored       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

# include "./get_next_line/get_next_line.h"

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
	struct s_node	*previous;
}					t_node;

typedef struct s_deque
{
	t_node			*head;
	t_node			*tail;
	int				length;
}					t_deque;

void				ft_putstr_fd(char *str, int fd);
void				ft_putnbr_fd(int nbr, int fd);
void				ft_putchar_fd(char c, int fd);
char				*ft_itoa_base(int nbr, char *base);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_itoa(int n);
int					ft_atoi(const char *str);
int					ft_arraylen(char **str_array);
void				ft_print_array(char **str_array);
char				**ft_split(const char *s, char c);
char				*ft_substr(const char *s, unsigned int start, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_free_strarray(char **str_array);
char				*ft_strdup(const char *s);
void				*ft_memcpy(void *dst, const void *src, size_t n);
/*
char				*ft_strjoin(char const *s1, char const *s2);
*/

#endif
