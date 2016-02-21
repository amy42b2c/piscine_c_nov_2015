/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_1st_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 12:03:18 by acresap           #+#    #+#             */
/*   Updated: 2016/01/23 14:39:51 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int	ft_strcmp(char *s1, char *s2)
//{
//	while (*s1++ == *s2++)
//	{
//		if (*s1 == '\0' && *s2 == '\0')
//			return (0);
//	}
//	return (*--s1 - *--s2);
//}

/* Need to compare two strings. When you subtract the address of one from the
 * address of the other, it returns the value in ascii numbers. 
 * Check man ascii to see the deci values to verify that the subtraction
 * is correct.  */

int	match(char *s1, char *s2)
{
	while (*s1++ == *s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		if (*s1 == '*' || *s2 == '*')
			return (1);
	}
	return (*--s1 - *--s2);
}
