/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 12:23:48 by acresap           #+#    #+#             */
/*   Updated: 2016/02/16 12:49:20 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(void)
{
//	abcdefghijklm nopqrstuvwxyz
//	1234567890123 4567890123456
	char	a;
	char	b;

	a = 'a' + 25;
	b = 'b' - a;
	ft_putchar(a);
	ft_putchar(b);
}

int		main(void)
{
	alpha_mirror();
	return (0);
}
