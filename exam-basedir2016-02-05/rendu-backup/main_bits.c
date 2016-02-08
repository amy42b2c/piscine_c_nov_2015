/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/27 18:01:09 by nsavry            #+#    #+#             */
/*   Updated: 2015/08/27 19:19:21 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void			ft_print_bin(unsigned char octet)
{
	int		i;
	char	c;

	i = 0;
	while (i < 8)
	{
		c = ((octet >> (7 - i)) & 1) + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void			ft_print_hex(unsigned int nb)
{
	int		i;
	char	c;
	int		test;

	i = 0;
	test = 0;
	while (i < 8)
	{
		c = (nb >> (60 - (4 * i))) & 15;
		if (c < 10)
			c = c + 48;
		else
			c = c + 87;
		if (test != 0 || c != 48 || i == 7)
		{
			test = 1;
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

unsigned char	ft_reverse_bin(unsigned char octet)
{
	unsigned char	tmp;
	int				i;

	tmp = 0;
	i = 0;
	while (i < 8)
	{
		tmp |= ((octet >> i) & 1) << (7 - i);
		i++;
	}
	return (tmp);
}

unsigned char	ft_swap_bin(unsigned char octet)
{
	unsigned char	tmp;
	int				i;

	tmp = 0;
	i = 0;
	while (i < 4)
	{
		tmp |= (((octet >> i) & 1) << (4 + i)) | (((octet >> (4 + i)) & 1) << i);
		i++;
	}
	return (tmp);
}

int				main(int ac, char **av)
{
	int		nb;
	char	*tmp;

	if (!av[1])
		tmp = strdup("0");
	else
		tmp = av[1];
	nb = atoi(tmp);
	ft_print_bin(nb);
	ft_print_hex(nb);
	ft_print_bin(ft_reverse_bin(nb));
	ft_print_bin(ft_swap_bin(nb));
	ft_print_hex(ft_reverse_bin(nb));
	ft_print_hex(ft_swap_bin(nb));
	return (0);
}
