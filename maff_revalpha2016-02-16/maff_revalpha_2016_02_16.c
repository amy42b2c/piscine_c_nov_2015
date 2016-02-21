/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:44:48 by acresap           #+#    #+#             */
/*   Updated: 2016/02/16 11:44:38 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha(void)
{
	char i;
	char j;
	
	i = 'z';
	j = 'Y';
//	while (i >= 'a')
//	{
		while (j >= 'A')
		{
			ft_putchar(i);
			ft_putchar(j);
			i = i - 2;
			j = j - 2;
		}
//	}
}

/*
void	maff_revalpha(void)
{
	unsigned char	a;
	unsigned char	b;
	int				i;

	a = 'z';
	b = 'Z';
	i = 0;
	while (a >= 'a')
	{
		if (i == 0)
		{
			ft_putchar(a);
			i = 1;
		}
		else
		{
			ft_putchar(b);
			i = 0;
		}
		a--;
		b--;
	}
	ft_putchar('\n');
}
*/

int		main(void)
{
	maff_revalpha();
	ft_putchar('\n');
	return (0);
}
