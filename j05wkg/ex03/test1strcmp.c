/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 08:59:04 by acresap           #+#    #+#             */
/*   Updated: 2016/01/15 12:47:54 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	char	*s;
	int		len;

	s = str;				/* to keep valeur of str (addr du ptr d'origine) */
	len = 0;
	while (*s != '\0')				/* if not at end of string */
	{
		s = s + 1;					/* increment */
		len++;
	}
	return (len);					/* print length (int: 0 or 1) */
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1 == '\0')					/* if the string is empty */
		return (33);
	while (&s1 == &s2)				/* valeurs the same ? */
	{
		i++;
	}
//	if (ft_strlen = 0)				/* if the 2 strings match! */
		return (0);
	if ((ft_strlen(s1)) < (ft_strlen(s2)))
//	if (ft_strlen < 0)				/* if 1 string SMALLER than the other */
		return (-1);
	if ((ft_strlen(s1)) > (ft_strlen(s2)))
//	if (ft_strlen > 0)				/* if 1 string LARGER than the other */
		return (1);
}

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;
	int		l;

	string1 = "My example sentence is really lame.";
	string2 = "My exemple sentence is really lame.";
//	string2 = "My example sentence is really lame, Joseph.";
	string3 = "aMy exee is  lame.";
	string4 = "aMy exee is  lame.";
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
