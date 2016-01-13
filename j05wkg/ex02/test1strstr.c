/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 14:29:54 by acresap           #+#    #+#             */
/*   Updated: 2016/01/13 18:28:56 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;
	
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	while (j != '\0')
	{
		j = i ? 1 : 0;
		j++;
	}
	return (j);
}

int		main(void)
{
	char str1[] = "The Car is red.";

	ft_putstr(str1);
	ft_strstr(str, to_find);
	ft_putchar('\n');
	return (0);
}
