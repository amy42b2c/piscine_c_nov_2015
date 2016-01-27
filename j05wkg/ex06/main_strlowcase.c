/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlowcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:47:47 by acresap           #+#    #+#             */
/*   Updated: 2016/01/20 22:21:34 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char	string[] = "WE ARE THE -CHAMPIONS, BUT [dFsf]{*&^%$# NOT.";
	printf("My string: [%s]\n", ft_strlowcase(string));
	return (0);
}
