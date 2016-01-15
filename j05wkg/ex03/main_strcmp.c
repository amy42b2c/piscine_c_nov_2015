/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 08:59:04 by acresap           #+#    #+#             */
/*   Updated: 2016/01/15 12:50:52 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;
	int		l;

	string1 = "My example sentence is really lame.";
	string2 = "My exemple sentence is really lame.";
	l = 0;
	printf("Length of string1 is         %d.\n", ft_strlen(string1));
	printf("Length of string2 is         %d.\n", ft_strlen(string2));
//	printf("Length of string2 is %d.\n", ft_strlen("L'ecole c'est geniale"));

	printf("String1 is [%s].\n", string1);
	printf("String2 is [%s].\n", string2);

	/* Test the REAL function "strcmp" to understand what it returns: */
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string2));
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string3));
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string4));
	/* Test of my ft_strcmp function to compare to the real one: */
	printf("Retour de   ma ft_strcmp:   [%d].\n", ft_strcmp(string1, string2));
}
