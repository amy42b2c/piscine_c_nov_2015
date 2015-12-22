/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:12:57 by acresap           #+#    #+#             */
/*   Updated: 2015/12/22 19:24:58 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strrev(char *str);

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
	}
}

int		ft_strlen(char *str)
{
	char	*b;
	int		strlen;

	b = str;
	strlen = 0;
	while (*b != 0)
	{
		b++;
		strlen++;
	}
}

int		main(void)
{
	char	*ptr;

	ptr = "abcde";
	printf("The length of my string is: %d", ft_strlen(ptr));
	str = ptr / 2;
	*ft_strrev(str);
	return (0);
}
