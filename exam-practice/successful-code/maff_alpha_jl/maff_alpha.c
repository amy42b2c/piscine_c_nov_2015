/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 10:20:22 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 10:31:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

int		main(void)
{
	int		index;
	int		isLower;

	isLower = 1;
	index = -1;
	while (++index < 26)
		if (isLower)
		{
			ft_putchar('a' + index);
			isLower = 0;
		}
		else
		{
			ft_putchar('A' + index);
			isLower = 1;
		}
	ft_putchar('\n');
}
