/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:20:03 by acresap           #+#    #+#             */
/*   Updated: 2015/12/18 16:58:22 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (str && *str)
	{
		ft_putchar(*str);
		++str;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 )
	{
		ft_putstr("-2147483648");
		return ;
	}
	/*
	if (nb < -2147483648 || nb > +2147483647)
	{
		ft_putstr("overflow: -2147483648");
		return ;
	}
	*/
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb > 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
