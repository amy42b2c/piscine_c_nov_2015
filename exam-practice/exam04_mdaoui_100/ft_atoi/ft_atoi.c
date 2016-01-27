/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 11:05:13 by exam              #+#    #+#             */
/*   Updated: 2016/01/19 11:20:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	signe;
	int	val;

	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
			|| *str == '\v')
		str++;
	signe = +1;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	val = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			val = (val*10) + (*str - '0');
		else
			return (val * signe);
		str++;
	}
	return (val * signe);
}
