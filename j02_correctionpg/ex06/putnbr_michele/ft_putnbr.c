/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:16:19 by mleblond          #+#    #+#             */
/*   Updated: 2015/12/08 11:54:21 by mleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	tab[12];
	int		pos;
	int		num;

	tab[0] = '0';
	num = 0;
	pos = 0;
	if (nb == 0)
		pos = 1;
	if (nb < 0)
		ft_putchar('-');
	else
		nb = -nb;
	while (nb < 0)
	{
		num = nb % 10;
		tab[pos] = -num + '0';
		nb = nb / 10;
		pos++;
	}
	pos--;
	while (pos >= 0)
		ft_putchar(tab[pos--]);
}
