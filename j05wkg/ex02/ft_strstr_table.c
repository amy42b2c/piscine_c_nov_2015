/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 18:55:27 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 15:35:18 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>									// for "strstr" //

int		find_next(char b[], char s[])
{
	while ((b[0] != '\0') || (s[0] != '\0'))
	{
		if (b[0] == s[0])
		{
			b++;
			s++;
		}
		else
			break ;
	}
	if (s[0] == '\0')
		return (0);
	else
		return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		found;
	char	*c;
	char	*d;

	c = str;
	d = to_find;
	if (str == 0)
		return (0);
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			found = (find_next(str, to_find));
			{
				if (found == 0)
					return (str);
			}
		}
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*a;
	char	*b;

	a = argv[1];
	b = argv[2];
	if (argc > 2)
	{
		printf("In the 1st string [%s], find [%s].\n", a, b);
		printf("My ft_strstr returns the string [%s].\n", ft_strstr(a, b));
		printf("The real strstr returns         [%s].\n", strstr(a, b));
	}
	return (0);
}
