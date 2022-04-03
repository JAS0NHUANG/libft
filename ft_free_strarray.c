/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strarray.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeelbored <ifeelbored@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:34:38 by ifeelbored        #+#    #+#             */
/*   Updated: 2022/03/23 21:35:04 by ifeelbored       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_strarray(char **str_array)
{
	char	**holder;

	if (str_array)
	{
		holder = str_array;
		while (*holder)
		{
			free(*holder);
			holder++;
		}
		free(str_array);
	}
	return ;
}
