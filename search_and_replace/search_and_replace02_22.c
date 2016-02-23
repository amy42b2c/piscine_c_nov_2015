/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 12:02:43 by acresap           #+#    #+#             */
/*   Updated: 2016/02/22 14:55:44 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	str = argv[1];
	i = 0;
	if (argc == 4 && (ft_strlen(argv[2]) == 1) && (ft_strlen(argv[3]) == 1))
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == *argv[2])
				argv[1][i] = *argv[3];
			i++;
		}
		ft_putstr(str);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
