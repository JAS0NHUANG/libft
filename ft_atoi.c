/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:11:13 by jahuang           #+#    #+#             */
/*   Updated: 2022/04/05 13:11:14 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		negatif;
	size_t	result;

	negatif = 1;
	result = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negatif = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	if (negatif < 0 && result > 2147483648)
		return (0);
	if (negatif > 0 && result > 2147483647)
		return (-1);
	return (result * negatif);
}
