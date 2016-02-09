/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:50:32 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 13:48:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char *str)
{
	char	*letter;

	letter = str;
	while (*letter != '\0')
	{
		if ((*letter >= 'a' && *letter <= 'l') || (*letter >= 'A' && *letter <= 'L'))
		{
			*letter = *letter + 13;
		}
		if ((*letter >= 'm' && *letter <= 'z') || (*letter >= 'M' && *letter <= 'Z'))
		{
			*letter = *letter - 13;
		}
		ft_putchar(*letter);
		letter++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
//		rotone(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
