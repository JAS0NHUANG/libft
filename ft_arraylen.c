/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:32:38 by jahuang           #+#    #+#             */
/*   Updated: 2022/02/23 14:35:19 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arraylen(char **str_array)
{
	int	length;

	length = 0;
	if (str_array)
	{
		while (str_array[length])
			length++;
	}
	return (length);
}
