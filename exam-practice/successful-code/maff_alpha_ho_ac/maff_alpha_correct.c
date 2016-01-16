/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:23:54 by exam              #+#    #+#             */
/*   Updated: 2015/11/27 21:09:12 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		maff_alpha(void)
{
	char i;
	int x;

	i = 'a';
	x = 0;
	while (i <= 'z')
	{
		ft_putchar(i - x * 32);
		x = !x;
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int main(void)
{
	maff_alpha();
	return (0);
}
