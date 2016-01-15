/* ************************************************************************** */
/*                                                                            */
/*   new name: test42strstramy.c                          :::      ::::::::   */
/*   copied from: test2strstr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 18:29:05 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 14:16:52 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_next(char *b, char *s)
{
	while ((*b != '\0') || (*s != '\0'))
	{
		if (*b == *s)                 /* is ptr of big == ptr of small? */
		{
			b++;
			s++;
		}
		else
			break; 					/* if haven't found all the "small" letters, 
					   quits the loop, but not the function (goes to next line);
										return exits the function completely. */
	}
	if (*s == '\0')  /* if at end of small string & haven't found match, exit */
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
	if (*to_find == '\0') 		/* if ptr of small is not at end of string... */
		return (str);  
	while (*str != '\0')		/* while ptr big is not at end of string.. */
	{
		if (*str == *to_find) 			/* if ptr of big == ptr of small... */
		{
			found = (find_next(str, to_find)); 	 	/* find next matching char */
			{
				if (found == 0)
				return (str);	 				/* addr de big; original ptr?? */
			}
		}
		str++; 						/* increment big to continue down string */ 
	}
	return (0); 					/* if *big not equal to *small, return nothing */
}

int		main()
{
	char	*str1;
	char	*str2;
	char	*p;

	str1 = "abcdehijcdam"; 							/* BIG STRING */
	str2 = "j";										/* SMALL STRING */
	p =	ft_strstr(str1, str2);	/* parameter to send the strings to the function */
	printf("returned string: %s\n", p);
	return (0);
}

//char	*ft_strstr(char *str, char *to_find)
//{
//	char	*big;
//	char	*small;
//	int		found;
//
//	big = str;
//	small = to_find;
//	if (*small == '\0') 		/* if ptr of small is not at end of string... */
//		return (big);  
//	while (*big != '\0')		/* while ptr big is not at end of string.. */
//	{
//		if (*big == *small) 			/* if ptr of big == ptr of small... */
//		{
//			if (find_next(big, small) == 0) 	 	/* find next matching char */
//				return (big);	 				/* addr de big; original ptr?? */
//		}
//		big++; 						/* increment big to continue down string */ 
//	}
//	return (0); 					/* if *big not equal to *small, return nothing */
//}
