/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 18:08:07 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 18:22:11 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char str[])
{
	int	index;
	int	number;
	int	sign;

	index = 0;
	number = 0;
	sign = 1;
	while (str[index] == ' ')
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		sign = (str[index] == '+') ? 1 : -1;
		index++;
		if (str[index] == '+' || str[index] == '-')
			return (0);
	}
	while ((str[index] != '\0') && (str[index] >= '0' && str[index] <= '9'))
	{
		number = 10 * number + (str[index] - '0');
		index++;
	}
	number = number * sign;
	return (number);
}
