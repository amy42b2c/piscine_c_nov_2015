/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 12:47:39 by acresap           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/15 14:00:53 by acresap          ###   ########.fr       */
=======
/*   Updated: 2015/12/10 20:36:12 by acresap          ###   ########.fr       */
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

<<<<<<< HEAD
void	ft_print_comb(char c)
=======
void	ft_print_comb(void)
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0' - 1;
	while (d1++ <= '9')
	{
		d2 = d1 + 1;
		while (d2 <= '9')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				ft_putchar(d1);
				ft_putchar(d2);
				ft_putchar(d3++);
				if (d1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			d2++;
		}
	}
}
