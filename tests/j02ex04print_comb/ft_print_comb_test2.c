/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 20:44:00 by acresap           #+#    #+#             */
/*   Updated: 2015/12/29 21:49:34 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			if (a != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b = b + 1;
		}
		a = a + 1;
	}
	ft_putchar('\n');
}
