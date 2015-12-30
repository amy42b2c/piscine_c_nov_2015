/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 09:59:50 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 12:37:12 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	printf("fact test1: %d, nb test1: %d\n", f, nb);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (nb > 1)
	{
		nb = nb - 1;
		f = f * nb;
		printf("fact test2: %d, nb test2: %d\n", f, nb);
	}
	return (f);
}
