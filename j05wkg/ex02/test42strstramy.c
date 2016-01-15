/* ************************************************************************** */
/*                                                                            */
/*   new name: test42strstramy.c                          :::      ::::::::   */
/*   copied from: test2strstr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 18:29:05 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 12:37:37 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_next(char *big, char *small)
{
	while ((*big != '\0') || (*small != '\0'))
	{
		if (*big == *small)  /* is ptr of big == ptr of small? */
		{
			big++;
			small++;
		}
		else
			break;
//			return (-1);  /* if haven't found all "small" letters. */
	}
	if (*small == '\0')        /* added test! */
		return (0);
	else
		return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*big;
	char	*small;
	int		found;

	big = str;
	small = to_find;
	if (*small == '\0')  /* if ptr of small is not at end of string... */
		return (big);  
//	if (big < small)  /* if big is smaller than small, they will never match */
//		return (0);
	while (*big != '\0')  /* while ptr big is not at end of string.. */
	{
		if (*big == *small)  /* if ptr of big == ptr of small... */
		{
			if (find_next(big, small) == 0)  /* find next matching char */
//			found = find_next(big, small); /* find next matching char */
//			if (found == 0) /* if found char == 0, finished (return big) */
				return (big);    /* addr de big; original ptr?? */
		}
		big++;     /* increment big to continue down string */ 
	}
	return (0); /* if *big not equal to *small, return nothing */
}

int		main()
{
	char	*str1;
	char	*str2;
	char	*p;

	str1 = "abcdehijcdam";
	str2 = "j";
	p =	ft_strstr(str1, str2);
	printf("returned string: %s\n", p);
	return (0);
}
