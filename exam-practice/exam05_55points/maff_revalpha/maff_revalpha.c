/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 13:01:10 by exam              #+#    #+#             */
/*   Updated: 2016/01/26 13:22:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	char	i;
	char	j;

	i = 'z';
	j = 'Y';
	while (i >= 'a')
	{
		while (j >= 'A')
		{
			ft_putchar(i);
			ft_putchar(j);
			i = i - 2;
			j = j - 2;
		}
	}
	ft_putchar('\n');
}

int		main(void)
{
	maff_alpha();
	return (0);
}
