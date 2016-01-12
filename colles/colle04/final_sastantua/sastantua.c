/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sastantua.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:25:30 by acresap           #+#    #+#             */
/*   Updated: 2016/01/12 18:44:22 by mdaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int		flip(int n_e, char flag_line)
{
	if (flag_line == 'L')
	{
		if (n_e == 1)
			return (7);
		else
			return (2 * ((n_e / 2) + 2) + (2 * ((n_e + 2) - 1))
					+ flip(n_e - 1, 'L'));
	}
	if (flag_line == 'F')
	{
		if (n_e == 1)
			return (3);
		else
			return (2 * ((n_e / 2) + 2) + flip(n_e - 1, 'L'));
	}
	if (flag_line != 'L' && flag_line != 'F')
	{
		while (n_e != 0)
		{
			ft_putchar(flag_line);
			n_e--;
		}
	}
	return (0);
}

void	prt_ln(int star, int psize)
{
	flip((star - psize) / 2, '*');
	flip(psize, '|');
	flip((star - psize) / 2, '*');
}

void	print_porte(int size, int nb_lig_bloc, int lines, int star)
{
	int psize;

	psize = (size % 2 == 0) ? size - 1 : size;
	if (lines > (nb_lig_bloc - psize))
	{
		if (lines == (nb_lig_bloc - psize + (psize / 2) + 1)
				&& size >= 5)
		{
			flip((star - psize) / 2, '*');
			flip(psize - 2, '|');
			ft_putchar('$');
			ft_putchar('|');
			flip((star - psize) / 2, '*');
		}
		else
			prt_ln(star, psize);
	}
	else
		flip(star, '*');
}

void	print_pyr(int ct_size, int size, int nb_base_pyr, int nb_lig_bloc)
{
	int	lines;
	int	spaces;
	int	star;
	int psize;

	lines = 1;
	spaces = (nb_base_pyr / 2) - (flip(ct_size, 'F') / 2);
	star = flip(ct_size, 'F') - 2;
	while (lines <= nb_lig_bloc)
	{
		flip(spaces--, ' ');
		ft_putchar('/');
		psize = (size % 2 == 0) ? size - 1 : size;
		if (size == ct_size)
			if (ct_size > 2)
				print_porte(size, nb_lig_bloc, lines, star);
			else
				(lines == nb_lig_bloc) ? prt_ln(star, psize) : flip(star, '*');
		else
			flip(star, '*');
		star = star + 2;
		ft_putchar('\\');
		ft_putchar('\n');
		lines++;
	}
}

void	sastantua(int size)
{
	int	ct_size;
	int	nb_lig_bloc;
	int	nb_base_pyr;
	int i;

	if (size > 0)
	{
		ct_size = 1;
		nb_lig_bloc = 3;
		nb_base_pyr = flip(size, 'L');
		i = 1;
		while (ct_size <= size)
		{
			print_pyr(ct_size, size, nb_base_pyr, nb_lig_bloc);
			nb_lig_bloc++;
			ct_size++;
		}
	}
}
