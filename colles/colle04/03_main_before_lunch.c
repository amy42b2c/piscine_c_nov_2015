/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sastantua.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:25:30 by acresap           #+#    #+#             */
/*   Updated: 2016/01/11 13:00:25 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

void	print_pyr(int ct_size, int nb_lig_bloc, int base_bloc)
{
	int	i;

	i = 1;
	while (i <= nb_lig_bloc)
	{
		while (
		printf(" ", );
		i++;
	}
}

void	sastantua(int size)
{
	int	ct_size;
	int	ct_lig_bloc;
	int	nb_lig_bloc;
	int	base_pyr;
	int	nb_stars;
	int	stars_to_add;

	ct_size = 1;
	ct_lig_bloc = 0;
	nb_lig_bloc = 3;
	base_pyr = 7;
	nb_stars = 1;
	stars_to_add = 6;
	while (ct_size <= size)
	{
		nb_lig_bloc = nb_lig_bloc + ct_lig_bloc;
		print_pyr(ct_size, nb_lig_bloc, base_pyr, nb_stars);
		if (ct_size % 2 == 0)
			nb_stars = nb_stars + stars_to_add + 2;
		ct_lig_bloc++;
		ct_size++;
	}
}

int	main(void)
{
	sastantua(3);
	sastantua(4);
	sastantua(5);
	sastantua(6);
	sastantua(7);
}
