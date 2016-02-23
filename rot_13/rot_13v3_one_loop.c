/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:50:32 by exam              #+#    #+#             */
/*   Updated: 2016/02/10 10:44:01 by acresap          ###   ########.fr       */
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
		if ((*letter >= 'a' && *letter <= 'm') ||
				(*letter >= 'A' && *letter <= 'M'))
			*letter = *letter + 13;
		else if ((*letter >= 'n' && *letter <= 'z') ||
					(*letter >= 'N' && *letter <= 'Z'))
			*letter = *letter - 13;
		ft_putchar(*letter);
		letter++;
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
