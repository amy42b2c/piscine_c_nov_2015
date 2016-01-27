/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 08:59:04 by acresap           #+#    #+#             */
/*   Updated: 2016/01/15 13:50:28 by acresap          ###   ########.fr       */
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

	string1 = "My example sentence is really lame.";
	string2 = "My example sentence is really lame.";
	string3 = "My example sentence is really lame";
	string4 = "My exemple sentence is really lame.";

	printf("\n");
	/* print the strings */
	printf("Original String1 is [%s].\n", string1);
	printf("	 String2 is [%s].\n", string2);
	printf("	 String3 is [%s].\n", string3);
	printf("	 String4 is [%s].\n", string4);
	printf("\n");

	/* Test of my ft_strcmp function to compare to the real one: */
	printf("Retour str2 ma ft_strcmp:   [%d].\n", ft_strcmp(string1, string2));
	/* Test the REAL function "strcmp" to understand what it returns: */
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string2));
	printf("\n");
	
	printf("Retour str3 ma ft_strcmp:   [%d].\n", ft_strcmp(string1, string3));
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string3));
	printf("\n");
	
	printf("Retour str4 ma ft_strcmp:   [%d].\n", ft_strcmp(string1, string4));
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string4));
	printf("\n");
	return (0);
}