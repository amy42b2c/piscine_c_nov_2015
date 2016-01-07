/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_find_next_prime.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 11:34:12 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 20:05:02 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nbr2;

	nbr2 = ft_find_next_prime(14);
	printf("The next prime number is %d.\n", nbr2);
	return (0);
}
