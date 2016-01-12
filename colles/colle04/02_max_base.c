/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sastantua.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:25:30 by acresap           #+#    #+#             */
/*   Updated: 2016/01/11 11:38:31 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* To know how many chars printed on the bottom line of the pyramid. */

void	sastantua(int size)
{
	int	i;
	int	taille;
	int	max_hauteur;
	int	max_base;

	i = 0;
	taille = 0;
	max_hauteur = 0;
	max_base = 0;
	while (i < size)
	{
		taille = taille + 3 + i;
		max_hauteur = 3 + i;
		i++;
	}
	printf("taille %d\n", taille);
	if (size == 1 || size == 5)
	max_base = max_hauteur * size * 2 + 1;
	else
	max_base = max_hauteur * size * 2 + 3;
	printf("max base %d\n", max_base);
}

int	main(void)
{
	sastantua(3);
}
