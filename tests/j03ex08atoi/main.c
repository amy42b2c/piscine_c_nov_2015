/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 09:24:33 by acresap           #+#    #+#             */
/*   Updated: 2015/12/23 13:06:53 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char str[]);

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		printf("error: need to use a string");
		return (33);
	}
	i = ft_atoi(argv[1]);
	printf("The characters entered: %s.\nThe number is %d.\n", argv[1], i);
	return (0);
}
