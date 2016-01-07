/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sqrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 17:00:36 by acresap           #+#    #+#             */
/*   Updated: 2016/01/07 10:57:30 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;
	int	tab[17] = { -36, -5, -2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 16, 17, 25, 26, \
   	36 };
	int	sqrt;

	nb = -1; /*	le -1 est mon indice de tableau; le tableau commence a 0.*/
	while (++nb < 17) /* tableau de 0 a 16 = 17 elements */ 
	{
		sqrt = ft_sqrt(tab[nb]);
		printf("The square root of %d ", tab[nb]);
		printf("is %d.\n", sqrt);
	}
	/*
	nb = 4;
	sqrt = ft_sqrt(nb);
	ft_putstr("The square root of ");
	ft_putnbr(nb);
	ft_putstr(" is ");
	ft_putnbr(sqrt);
	ft_putstr(".");
	printf("The square root of %d ", nb);
	printf("is %d.\n", sqrt);
	*/
	return (0);
}
