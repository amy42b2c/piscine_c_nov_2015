/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_printable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 18:11:17 by acresap           #+#    #+#             */
/*   Updated: 2016/01/28 09:09:41 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	string1[] = "There are only printable characters here.";
	printf("printable characters = 1  [%d]\n", ft_str_is_printable(string1));
	ft_putchar('\n');
	char	string2[] = "how do you test non-printable characters?";
	printf("non-printable?? = 0       [%d]\n", ft_str_is_printable(string2));
	ft_putchar('\n');
	char	string3[] = "The \x07 re intHisStrIng";
	// use hexa numbers to test 
	printf("hexa case = 0             [%d]\n", ft_str_is_printable(string3));
	ft_putchar('\n');
	char	string4[] = "";
	printf("chaine vide = 1           [%d]\n", ft_str_is_printable(string4));
	ft_putchar('\n');
	return (0);
}
