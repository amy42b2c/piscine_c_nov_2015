/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy_argc_argv.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:59:35 by acresap           #+#    #+#             */
/*   Updated: 2016/01/08 17:17:10 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char	*dest;

	if (argc != 2)
		return (1);
	dest = (char *)malloc(1024);
	ft_strcpy(dest, argv[1]);
	printf("Destination: %s\n", dest);
	printf("Source: %s\n", argv[1]);
	return (0);
}
