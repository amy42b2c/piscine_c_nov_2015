/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sastantua.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:25:30 by acresap           #+#    #+#             */
/*   Updated: 2016/01/11 19:35:38 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		last_line(int numero_etage)
{
	if (numero_etage == 1)
		return (7);
	else
		return (2 * ((numero_etage/2) + 2) + (2 * ((numero_etage + 2) - 1)) + 
				last_line(numero_etage - 1));
}

int		first_line(int numero_etage)
{
	if (numero_etage == 1)
		return (3);
	else
		return (2 * ((numero_etage/2) + 2) + last_line(numero_etage - 1));
}

int		taille_pyr(int size)
{
	int	i;
	int	taille;

	i = 0;
	taille = 0;
	while (i < size)
	{
		taille = taille + 3 + i;
		i++;
	}
	return (taille);
}

int		print_pyr(int size, int nb_first, int nb_last, int nb_lig_bloc)
{
	int	lines;
	int	spaces;
	int	i;
	int	etoiles;
	int	j;
	
	lines = 1;
	spaces = nb_last / 2 - 1;
	i = spaces;
	etoiles = nb_first - 2;
	while (lines <= nb_lig_bloc)
	{
		while (i != 0)
		{
			ft_putchar(' ');
			i--;
		}
		spaces--;
		i = spaces;
		ft_putchar('/');
		j = 1;
		while (j <= etoiles)
		{
			ft_putchar('*');
			j++;
		}
		etoiles = etoiles + 2;
		ft_putchar('\\');
		ft_putchar('\n');
		lines++;
	}
	return (0);
}

void	sastantua(int size)
{
	int	ct_size;
	int	ct_lig_bloc;
	int	nb_lig_bloc;
	int	base_pyr;
	int	nb_stars;
	int	stars_to_add;
	int	nb_first;
	int	nb_last;
	int i;

	i = 1;
	ct_size = 1;
	ct_lig_bloc = 0;
	nb_lig_bloc = 3;
	base_pyr = 7;
	nb_stars = 1;
	stars_to_add = 6;
	while (ct_size <= size)
	{
		nb_first = first_line(ct_size);
		nb_last = last_line(ct_size);
		nb_lig_bloc = nb_lig_bloc + ct_lig_bloc;
		print_pyr(ct_size, nb_first, nb_last, nb_lig_bloc);
	//	print_pyr(ct_size, nb_lig_bloc, base_pyr, nb_stars);
		if (ct_size % 2 == 0)
			nb_stars = nb_stars + stars_to_add + 2;
		ct_lig_bloc++;
		ct_size++;
	}
}

int	main(void)
{
	sastantua(2);
	return (0);
}
