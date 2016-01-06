/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sqrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 17:00:36 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 08:59:09 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;
	int	sqrt;

	nb = 167;
	sqrt = ft_sqrt(nb);
	//ft_putstr("The square root of ");
	//ft_putnbr(nb);
	//ft_putstr(" is ");
	//ft_putnbr(sqrt);
	//ft_putstr(".");
	printf("The square root of %d ", nb);
	printf("is %d.\n", sqrt);
	return (0);
}
