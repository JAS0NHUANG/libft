/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:44:21 by jahuang           #+#    #+#             */
/*   Updated: 2022/02/23 14:49:41 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_array(char **str_array)
{
	while (*str_array)
	{
		ft_putstr_fd(*str_array, 1);
		ft_putstr_fd("\n", 0);
		str_array++;
	}
}
