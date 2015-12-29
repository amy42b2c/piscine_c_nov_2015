/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_simplified.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 19:31:53 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 17:40:49 by acresap          ###   ########.fr       */
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
	return (strlen);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strrev_pointers(char *str)
{
	char	*src;
	char	*dest;
	char	strglength;
	int		count;
	char	c;

	strglength = ft_strlen(str);
	count = 0;
	while (count < strglength / 2)
	{
		src = str + count;
		dest = str + (strglength - 1) - count;
		c = *src;
		*src = *dest;
		*dest = c;
		ft_putstr(str);
		ft_putchar('\n');
		count++;
	}
	return (str);
}
