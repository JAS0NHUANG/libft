/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeelbored <ifeelbored@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:45:33 by jahuang           #+#    #+#             */
/*   Updated: 2022/03/23 21:36:26 by ifeelbored       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			index;
	unsigned char	*s1_holder;
	unsigned char	*s2_holder;

	index = 0;
	s1_holder = (unsigned char *)s1;
	s2_holder = (unsigned char *)s2;
	while (s1_holder[index] && s2_holder[index] && \
			s1_holder[index] == s2_holder[index])
		index++;
	return (s1_holder[index] - s2_holder[index]);
}
