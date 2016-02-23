/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13two_loops.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 19:25:58 by acresap           #+#    #+#             */
/*   Updated: 2016/02/09 19:26:24 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	char	*letter;

	letter = str;
	while (*letter != '\0')
	{
		while ((*letter >= 'a' && *letter <= 'z') ||
				(*letter >= 'A' && *letter <= 'Z'))
		{
			if ((*letter >= 'n' && *letter <= 'z') ||
					(*letter >= 'N' && *letter <= 'Z'))
				*letter = *letter - 13;
			else
				*letter = *letter + 13;
			ft_putchar(*letter);
			letter++;
		}
		if (*letter != '\0')
		{
			ft_putchar(*letter);
			letter++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
