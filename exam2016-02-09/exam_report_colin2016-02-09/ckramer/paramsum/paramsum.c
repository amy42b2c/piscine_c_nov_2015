/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 12:15:08 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 12:32:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = - nbl;
	}
	if (nbl >= 10)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	else
		ft_putchar(nbl + '0');
}

int		main(int argc, char **argv)
{
	int	i;
	char	**test;
	i = 0;
	if (argc <= 1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	test = argv;
	i = argc - 1;
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}
