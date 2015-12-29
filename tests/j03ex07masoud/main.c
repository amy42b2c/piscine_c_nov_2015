/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:12:57 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 13:02:27 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strrev(char *str);

int		main(int argc, char *argv[])
{
	char	*myparam;

	myparam = (char *)malloc(strlen(argv[1]) + 1);
	strcpy(myparam, argv[1]);
	if (argc != 2)
		return (33);
	printf("\nLe parametre avant %s", myparam);
	ft_strrev(myparam);
	printf("\nLe parametre apres %s\n", myparam);
	return (0);
}
