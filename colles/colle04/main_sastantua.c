/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sastantua.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:25:30 by acresap           #+#    #+#             */
/*   Updated: 2016/01/11 21:08:52 by acresap          ###   ########.fr       */
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

int		print_pyr(int nb_first, int base_pyr, int nb_lig_bloc)
{
	int	lines;
	int	spaces;
	int	i;
	int	etoiles;
	int	j;
	
	lines = 1;
	spaces = (base_pyr / 2) - (nb_first / 2);
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
	int	nb_first;
	int i;

	ct_size = 1;
	ct_lig_bloc = 0;
	nb_lig_bloc = 3;
	base_pyr = last_line(size);
	i = 1;
	nb_lig_bloc = nb_lig_bloc + ct_lig_bloc;
	while (ct_size <= size)
	{
		nb_first = first_line(ct_size);
//		printf("nb_first: %d, base_pyr: %d, nb_lig_bloc: %d\n", nb_first, 
//				base_pyr, nb_lig_bloc);
		print_pyr(nb_first, base_pyr, nb_lig_bloc);
		ct_size++;
		nb_lig_bloc++;
	}
}

int	main(void)
{
	sastantua(6);
	return (0);
}
