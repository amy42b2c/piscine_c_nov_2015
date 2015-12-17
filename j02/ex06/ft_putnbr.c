/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:20:03 by acresap           #+#    #+#             */
/*   Updated: 2015/12/17 17:14:01 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

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
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb > 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
