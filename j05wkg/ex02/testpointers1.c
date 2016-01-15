/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpointers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 18:13:18 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 18:26:17 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_test(int a)
{
	printf("etape 2:   %d\n", a);
	a = 42;
	printf("etape 3:   %d\n", a);
}

int		main(void)
{
	int a;

	a = 0;
	printf("etape 1:   %d\n", a);
	ft_test(a);
	printf("etape 4:   %d\n", a);
	return (0);
}
