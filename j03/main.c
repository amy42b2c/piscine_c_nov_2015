/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:46:34 by acresap           #+#    #+#             */
/*   Updated: 2015/12/17 23:47:41 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int a;
	int b;
	int div;
	int	mod;
	
	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d\nb:%d \ndiv: %d \nmod: %d", a, b, div, mod);
	return (0);
}
