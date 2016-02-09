/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:25:43 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 12:08:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *nb)
{
	int n;
	int sign;

	sign = 1;
	n = 0;
	while (*nb == ' ' || *nb == '\t')
		nb++;
	if (*nb == '-')
	{
		sign = -1;
		nb++;
	}
	else if (*nb == '+')
		nb++;
	while (*nb && *nb >= '0' && *nb <= '9')
	{
		n = n * 10 + (*nb - '0');
		nb++;
	}
	return (n * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int main (int c, char **v)
{
	int n;
	int i;

	if (c != 1)
	{
		n = ft_atoi(v[1]);
		if (n > 0 && n < 2000000000 && ((9 * n) < 2000000000))
		{
			i = 1;
			while (i <= 9)
			{
				ft_putnbr(i);
				ft_putchar(' ');
				ft_putchar('x');
				ft_putchar(' ');
				ft_putnbr(n);
				ft_putchar(' ');
				ft_putchar('=');
				ft_putchar(' ');
				ft_putnbr(i * n);
				ft_putchar('\n');
				i++;
			}
		}
		else
			ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
