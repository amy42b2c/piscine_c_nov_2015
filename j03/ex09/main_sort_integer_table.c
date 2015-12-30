/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort_integer_table.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 20:48:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 13:10:41 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int i;
	int t[10] = {15, 3, 1, 20, 6, 9, 13, 11, 4, 2};

	i = 0;
	ft_sort_integer_table(t, 10);
	while (i < 10)
	{
		printf("Sort: %d\n", t[i]);
		i++;
	}
	return (0);
}
