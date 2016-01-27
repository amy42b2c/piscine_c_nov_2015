/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_uppercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 18:11:17 by acresap           #+#    #+#             */
/*   Updated: 2016/01/27 21:36:12 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	string1[] = "ONLYUPPERCASELETTERSINTHISSTRING";
	printf("upper case only = 1      [%d]\n", ft_str_is_uppercase(string1));
	ft_putchar('\n');
	char	string2[] = "UPPER CASE LETTERS AND SPACES";
	printf("upper case w/spaces = 0  [%d]\n", ft_str_is_uppercase(string2));
	ft_putchar('\n');
	char	string3[] = "ThereAreUPPERandupperCAseleTTersintHisStrIng";
	printf("lower & upper case = 0   [%d]\n", ft_str_is_uppercase(string3));
	ft_putchar('\n');
	char	string4[] = "564654654122772AND";
	printf("numbers = 0              [%d]\n", ft_str_is_uppercase(string4));
	ft_putchar('\n');
	char	string5[] = "";
	printf("chaine vide = 1          [%d]\n", ft_str_is_uppercase(string5));
	ft_putchar('\n');
	return (0);
}
