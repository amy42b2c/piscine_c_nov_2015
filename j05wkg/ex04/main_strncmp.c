/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 13:48:37 by acresap           #+#    #+#             */
/*   Updated: 2016/01/20 15:29:09 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * strcmp is used to compare strings, one character at a time. 
 * strncmp compares two strings, but only a certain number of characters. 
 *
 * When writing the main, always test the "REAL" function with your function.
 *
*/

#include <stdio.h>					/* for printf */
#include <string.h>					/* for strncmp */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			*str1;
	char			*str2;
	unsigned int	nbr;

	str1 = "example 123";
	str2 = "exemple 123";
	nbr = 5;
	printf("Str1 from my ft_strncmp:    [%s]\n", str1);
	printf("Str2 from my ft_strncmp:    [%s]\n", str2);
	printf("Response: %d\n", ft_strncmp(str1, str2, nbr));
	/*     What's the diff btwn 'a' and 'e' ??      (man ascii) */
	printf("Response: %d\n", strncmp(str1, str2, nbr));
	return (0);
}
