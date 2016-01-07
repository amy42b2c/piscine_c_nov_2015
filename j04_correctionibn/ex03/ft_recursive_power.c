/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 10:07:41 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 18:12:23 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	counter;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	counter = 1;
	while (counter <= power)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		counter++;
	}
	return (result);
}
