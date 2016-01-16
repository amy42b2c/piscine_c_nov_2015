/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 10:21:06 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 10:36:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_replace(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'y')
			str[i] = str[i] + 1;
		else if (str[i] >= 'A' && str[i] <= 'Y')
		   str[i] = str[i] + 1;
		else if (str[i] == 'z')
			str[i] = 'a';
		else if (str[i] == 'Z')
			str[i] = 'A';
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char *str;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	ft_putstr(ft_replace(str));
	ft_putchar('\n');
	return (0);
}
