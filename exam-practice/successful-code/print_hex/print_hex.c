/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 11:26:50 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 14:12:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putnbr(char *c)
{
	int i;
	int zero;
	int diz;
	int n;

	i = 0;
	zero = 0;
	diz = 1;
	n = 0;
	while (c[i] != '\0')
		i++;
	i = i - 1;
	if (c[0] == '-')
		return (0);
	if (c[0] == '+')
		zero = 1;
	while (i >= zero)
	{
		n = n + diz*(c[i] -	'0');
		diz = diz * 10;
		i--;
	}
	return (n);
}

char	ft_hexchar(int n)
{
	char *num;
	char hex;
	char c;

	c = '\n';
	num = "0123456789abcdef";
	hex = num[n];
	return (hex);

}

int		ft_dec_to_hex(int n)
{
	int		i;
	int		num;
	int		num2;
	int		base;
	char	c;
	char cn;

	i = 0;
	num = n;
	cn = 'x';
	base = 1;
	while (num > 16)
	{
		num = num / 16;
		base = base * 16;
	}
	num = n;
	while (base >= 1)
	{
		num2 = num / base;
		c = ft_hexchar(num2);
		write(1, &c, 1);
		num = num % base;
		base = base / 16;
	}
	return (0);
}

int main(int argc, char **argv)
{
	char	n;

	n = '\n';
	if (argc != 2)
	{
		write(1, &n, 1);
		return (0);
	}
	ft_dec_to_hex(ft_putnbr(argv[1]));
	write(1, &n, 1);
	return (0);
}
