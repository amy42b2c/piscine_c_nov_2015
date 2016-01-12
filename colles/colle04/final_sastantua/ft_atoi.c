/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:07:34 by mdaoui            #+#    #+#             */
/*   Updated: 2016/01/12 19:19:52 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signe;
	int	val;

	signe = +1;
	if (*str == '-')
	{
		str++;
		signe = -1;
	}
	if (*str == '+')
		str++;
	val = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			val = (val * 10) + (*str - '0');
		else
			return (val * signe);
		str++;
	}
	return (val * signe);
}
