/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 12:41:14 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 13:21:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	find_prime(int	nb)
{
	int	i;

	i = 2;
	while ((nb	% i) != 0)
		i++;
	printf("%d", i);
	return (i);
}

int	main(int argc, char **argv)
{
	int	number;
	int	prime;

	number = 0;
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	number = atoi(argv[1]);
	if (number == 1)
		printf("%d", number);
	else
		while (number > 1)
		{
			prime = find_prime(number);
			number = (number / prime);
			if (number > 1)
				printf("%c", '*');
		}
	printf("\n");
	return (0);
}
