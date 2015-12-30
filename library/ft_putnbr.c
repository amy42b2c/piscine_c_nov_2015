/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 11:49:45 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 12:39:58 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	int			tab[13];
	int			count;
	long long	nbr2;

	if (nbr == 0)
		ft_putchar('0');
	nbr2 = nbr;
	if (nbr2 < 0)
	{
		ft_putchar('-');
		nbr2 = -nbr2;
	}
	count = 0;
	while (nbr2 != 0)
	{
		tab[count] = nbr2 % -10;
		count++;
		nbr2 /= 10;
	}
	while (count--)
	{
		ft_putchar(tab[count] + '0');
	}
}
