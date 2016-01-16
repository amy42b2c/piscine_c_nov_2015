/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 11:57:51 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 14:33:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		main(int argc, char *argv[])
{
	char	*low_case;
	char	*up_case;
	int		i;

	low_case	= "nopqrstuvwxyzabcdefghijklm";
	up_case		= "NOPQRSTUVWXYZABCDEFGHIJKLM";
	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_putchar(up_case[argv[1][i] - 65]);
			else
				if (argv[1][i] >= 97 && argv[1][i] <= 122)			
					ft_putchar(low_case[argv[1][i] - 97]);
				else
					ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
