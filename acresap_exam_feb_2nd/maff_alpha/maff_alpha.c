/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 10:39:13 by exam              #+#    #+#             */
/*   Updated: 2016/02/02 10:51:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int	i;
	int	j;

	i = 'a';
	j = 'B';
	while (i <= 'z')
	{
		while (j <= 'Z')
		{
			ft_putchar(i);
			ft_putchar(j);
			i = i + 2;
			j = j + 2;
		}
	}
}

int		main(void)
{
	maff_alpha();
	ft_putchar('\n');
	return (0);
}
