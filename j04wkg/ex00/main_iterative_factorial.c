/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_iterative_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 11:10:17 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 19:21:05 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int		main(void)
{
	int	result;

	result = 0;
	result = ft_iterative_factorial(7);
	printf("The result is %d.\n", result);
//	printf("The result of factorial "nb"is %d.\n", result);
	return (0);
}
