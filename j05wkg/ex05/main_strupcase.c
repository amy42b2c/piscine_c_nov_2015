/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strupcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:47:47 by acresap           #+#    #+#             */
/*   Updated: 2016/01/20 21:42:56 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
//	char	string[20];
	//char	*s;

//	*string = "we are the champions";
//	char	string[] = "we are the champions";	/* this works for reserving memory */
	char	string[] = "we are the -champions, but [dfsf]{*&^%$# not.";
	printf("My string: [%s]\n", ft_strupcase(string));
	return (0);
}
