/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:03:24 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:21:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_pgcd(int a, int b, int n)
{
	if (n == 1)
		return (1);
	if ((a % n == 0) && (b % n == 0))
		return (n);
	else
		return(ft_pgcd(a, b, n - 1));
}

int	main(int c, char **v)
{
	int	a;
	int b;
	int n;
	
	if (c == 3)
	{
		a = atoi(v[1]);
		b = atoi(v[2]);
		if (a > 0 && b > 0)
		{
			n = (a > b) ? b : a;
			printf("%d", ft_pgcd(a, b, n));
		}
	}
	printf("\n");
	return (0);
}
