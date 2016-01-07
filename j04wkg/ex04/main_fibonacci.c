/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fibonacci.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 14:49:01 by acresap           #+#    #+#             */
/*   Updated: 2016/01/06 19:34:59 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	n;
	int	i;

	n = 6;
	i = ft_fibonacci(n);
	printf("The fibonacci of %d ", n);
	printf("is %d.\n", i);
	return (0);
}
