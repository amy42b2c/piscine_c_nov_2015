/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 00:05:46 by acresap           #+#    #+#             */
/*   Updated: 2015/12/18 18:11:29 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putcomma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int b;
	int first_number;

	a = 0;
	b = 1;
	first_number = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (first_number == 0)
				ft_putcomma();
			first_number = 0;
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			++b;
		}
		++a;
		b = a + 1;
	}
}
