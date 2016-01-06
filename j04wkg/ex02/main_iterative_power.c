/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_iterative_power.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 13:32:44 by acresap           #+#    #+#             */
/*   Updated: 2016/01/04 15:55:22 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	r;
	int	nb;
	int	power;

	nb = 3;
	power = 4;
	r = ft_iterative_power(nb, power);
	printf("%d", nb);
	printf(" to the power of %d ", power);
	printf("is %d.\n", r);
}
