/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 11:55:26 by acresap           #+#    #+#             */
/*   Updated: 2016/02/16 12:01:19 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	char i;
	char j;

	i = 'a';
	j = 'B';
	while (j <= 'Z')
	{
		ft_putchar(i);
		ft_putchar(j);
		i = i + 2;
		j = j + 2;
	}
}

int		main(void)
{
	maff_alpha();
	ft_putchar('\n');
	return (0);
}
