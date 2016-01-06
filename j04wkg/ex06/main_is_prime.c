/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 09:05:47 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 11:32:00 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int	main(void)
{
	int	nbr;

	nbr = ft_is_prime(76552363);
	if (nbr == 1)
		printf("%d = NBR given is prime.\n", nbr);
	else
		printf("%d = NBR give is NOT prime.\n", nbr);
	return (0);
}
