/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:48:14 by exam              #+#    #+#             */
/*   Updated: 2015/12/04 14:58:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void maff_alpha(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i % 2 == 0)
			ft_putchar(i - 32);
		else
			ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

int main (void)
{
	maff_alpha();
	return (0);
}
