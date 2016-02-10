/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:13:49 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 13:11:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int 	i;
	int 	flag_b;
	int 	flag_m;

	if (ac == 2)
	{
		i = 0;
		flag_b = 0;
		flag_m = 0;
		while(av[1][i] != '\0')
		{
			while ( av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
			{
				flag_b = 1;
				i++;
				if (i == ft_strlen(av[1]))
					break;
			}
			if (i == ft_strlen(av[1]))
				break;
			if (flag_b && flag_m)
				write(1, " ", 1);
			ft_putchar(av[1][i]);
			flag_b = 0;
			flag_m = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
