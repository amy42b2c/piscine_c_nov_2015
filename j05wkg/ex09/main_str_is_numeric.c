/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_is_numeric.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:43:59 by acresap           #+#    #+#             */
/*   Updated: 2016/01/22 14:58:26 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	string1[] = "123456789";
	printf("str is numeric:         [%d]\n", ft_str_is_numeric(string1));
	char	string2[] = "123456789 [dFsf]{*&^%$# NOT.";
	printf("str has sp characters:  [%d]\n", ft_str_is_numeric(string2));
	char	string3[] = "abc123456789defg";
	printf("alpha-numeric str:      [%d]\n", ft_str_is_numeric(string3));
	return (0);
}
