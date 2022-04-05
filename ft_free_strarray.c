/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strarray.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:11:32 by jahuang           #+#    #+#             */
/*   Updated: 2022/04/05 13:11:40 by jahuang          ###   ########.fr       */
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
