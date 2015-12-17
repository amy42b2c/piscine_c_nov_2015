/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 00:05:46 by acresap           #+#    #+#             */
/*   Updated: 2015/12/17 18:13:53 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b <= 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			ft_putchar(',');
			ft_putchar(' ');
			++b;
		}
		++a;
		b = a + 1;
	}
	write(1, "98 99", 5);
}
