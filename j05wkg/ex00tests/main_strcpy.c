/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 19:04:03 by acresap           #+#    #+#             */
/*   Updated: 2016/01/08 16:14:35 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
*/
int		main(void)
{
	char	tab2[] = "this is a test, longer than source";
	char	tab1[20] = "n'importe quoi";
	char	*dest2;
	char	*src2;

	dest2 = tab1;
	src2 = tab2;
	printf("Original Destination : %s\n", dest2);
	printf("Source: %s\n", src2);
	printf("New Destination: %s\n", ft_strcpy(dest2, src2));
	return (0);
}
