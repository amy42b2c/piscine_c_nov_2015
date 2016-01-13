/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 18:29:05 by acresap           #+#    #+#             */
/*   Updated: 2016/01/13 22:30:04 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_next(char *found, char *small)
{
	while ((*small != '\0') || (*found != '\0'))
	{
		if (*found == *small)
		{
			small++;
			found++;
		}
		else
			return (-1);   /* if haven't found all "small" letters. */
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*big;
	char	*small;
	int		found;

	big = str;
	small = to_find;
	if (*small == '\0')
		return (big);
	if (big < small)
		return (0);
	while (*big != '\0')
	{
		if (*big == *small)
		{
			found = find_next(big, small);
			if (found == 0)
				return (big);
		}
		big++;
	}
	return (0);
}

int		main()
{
	char	*str1;
	char	*str2;
	char	*p;

	str1 = "abcdehijcdam";
	str2 = "cde";
	p =	ft_strstr(str1, str2);
	printf("returned string: %s\n", p);
	return (0);
}
