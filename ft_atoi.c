/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifeelbored <ifeelbored@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:36:14 by ifeelbored        #+#    #+#             */
/*   Updated: 2022/04/02 23:36:13 by ifeelbored       ###   ########.fr       */
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
	if (*str && (*str < '0' || *str > '9'))
		return (-1);
	if (negatif < 0 && result > 2147483648)
		return (-1);
	if (negatif > 0 && result > 2147483647)
		return (-1);
	return (result * negatif);
}
