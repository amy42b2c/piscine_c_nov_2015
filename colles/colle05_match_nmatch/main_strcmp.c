/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 12:12:25 by acresap           #+#    #+#             */
/*   Updated: 2016/01/23 14:09:58 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//int	ft_strcmp(char *s1, char *s2);
int	match(char *s1, char *s2);

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;

	string1 = "main.c";
	string2 = "main.c";		/* same as string1 */
	string3 = "*.c";		/* using *         */
	string4 = "m*in.c";

	printf("\n");
	/* print the strings */
	printf("Original String1 is [%s].\n", string1);
	printf("	 String2 is [%s].\n", string2);
	printf("	 String3 is [%s].\n", string3);
	printf("	 String4 is [%s].\n", string4);
	printf("\n");

	/* Test of my ft_strcmp function to compare to the real one: */
	printf("Retour de match str2:       [%d].\n", match(string1, string2));
	/* Test the REAL function "strcmp" to understand what it returns: */
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string2));
	printf("\n");

	printf("Retour match str3:          [%d].\n", match(string1, string3));
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string3));
	printf("\n");

	printf("Retour match str4:          [%d].\n", match(string1, string4));
	printf("Retour la valeur de strcmp: [%d].\n", strcmp(string1, string4));
	printf("\n");
}
