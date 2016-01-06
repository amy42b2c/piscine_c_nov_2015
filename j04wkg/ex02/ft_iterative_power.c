/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 13:34:15 by acresap           #+#    #+#             */
/*   Updated: 2016/01/04 16:41:35 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	counter = 1;
	result = 1;
	while (counter <= power)
	{
		result = result * nb;
		counter++;
	}
	return (result);
}
