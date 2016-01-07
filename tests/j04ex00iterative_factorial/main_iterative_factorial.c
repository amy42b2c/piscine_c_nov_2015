/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_iterative_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 11:10:17 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 12:24:59 by acresap          ###   ########.fr       */
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
	result = ft_iterative_factorial(4);
	printf("Result is %d.\n", result);
	return (0);
}