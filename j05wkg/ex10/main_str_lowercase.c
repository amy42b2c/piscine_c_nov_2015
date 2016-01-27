/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_lowercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 18:11:17 by acresap           #+#    #+#             */
/*   Updated: 2016/01/27 18:49:07 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
//	ft_str_is_lowercase(str);
	char	string1[] = "onlylowercaselettersinthisstring";
	printf("lower case only = 1      [%d]\n", ft_str_is_lowercase(string1));
	ft_putchar('\n');
	char	string2[] = "only lower case letters in this string";
	printf("lower case w/spaces = 0  [%d]\n", ft_str_is_lowercase(string2));
	ft_putchar('\n');
	char	string3[] = "ThereAreoNlyloWerCAseleTTersintHisStrIng";
	printf("lower & upper case = 0   [%d]\n", ft_str_is_lowercase(string3));
	ft_putchar('\n');
	char	string4[] = "564654654122772ng";
	printf("numbers = 0              [%d]\n", ft_str_is_lowercase(string4));
	ft_putchar('\n');
	char	string5[] = "";
	printf("chaine vide = 1          [%d]\n", ft_str_is_lowercase(string5));
	ft_putchar('\n');
	return (0);
}
