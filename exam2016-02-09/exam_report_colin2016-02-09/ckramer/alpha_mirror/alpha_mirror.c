/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:52:59 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 12:08:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char ** argv)
{
	int		i;
	char	elem;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			elem = 'z' + 'a' - argv[1][i];
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			elem = 'Z' + 'A' - argv[1][i];
		else
			elem = argv[1][i];
		ft_putchar(elem);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
