/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_mostefa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 10:35:06 by acresap           #+#    #+#             */
/*   Updated: 2016/01/07 10:42:01 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 0;
	while (counter * counter < nb)
		counter++;
	if (counter * counter == nb)
		return (counter);
	return (0);
}
