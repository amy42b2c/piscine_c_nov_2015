/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_recursive_power.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 10:11:09 by acresap           #+#    #+#             */
/*   Updated: 2016/01/05 11:22:16 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int r;
	int nb;
	int power;

	nb = 3;
	power = 4;
	r = ft_recursive_power(nb, power);
	printf("%d", nb);
	printf(" to the power of %d ", power);
	printf("is %d.\n", r);
}
