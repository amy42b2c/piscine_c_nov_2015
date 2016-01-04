/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 18:11:09 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 13:05:28 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char str[]);

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		val;
	char	str[20];

	i = 0;
	if (argc != 2)
	{
		printf("error: please enter a string, type char");
		return (33);
	}
	i = ft_atoi(argv[1]);
	printf("The string (char) entered: %s\nThe int is %d\n", argv[1], i);
	atoi(argv[1]);

	strcpy(str, "++678536");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "000042");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	return (0);
}
