/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 09:59:50 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 12:58:01 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (nb > 1)
	{
		nb = nb - 1;
		f = f * nb;
	}
	return (f);
}