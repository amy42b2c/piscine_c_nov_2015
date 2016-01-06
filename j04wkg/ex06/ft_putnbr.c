/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 20:00:49 by acresap           #+#    #+#             */
/*   Updated: 2016/01/05 21:08:48 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int			tab[13];
	int			counter;
	long long	nb2;

	if (nb == 0)
		ft_putchar(' ');
	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = -nb2;
	}
	counter = 0;
	while (nb2 != 0)
	{
		tab[counter] = nb2 % -10;
		counter++;
		nb2 /= 10;
	}
	while (counter--)
	{
		ft_putchar(tab[counter] + '0');
	}
}
