/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckramer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 11:04:00 by ckramer           #+#    #+#             */
/*   Updated: 2016/01/14 14:31:42 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	char	*body;
	char	*part;

	body = argv[1];
	part = argv[2];
	if (argc > 2)
	{
		printf("In the string [%s] find [%s]\n", body, part);
		printf("In the string ft_strstr  [%s] \n", ft_strstr(body, part));
		printf("Found in the string (find) [%s] \n", strstr(body, part));
	}
	return (0);
}
