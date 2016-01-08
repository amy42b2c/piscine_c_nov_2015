/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy_argc_argv.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:59:35 by acresap           #+#    #+#             */
/*   Updated: 2016/01/08 18:00:34 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char *argv[])
{
	char	*val;
	char	*dest2;

	dest2 = NULL;
	(void)argc;
	val = ft_strcpy(dest2, argv[1]);
	printf("Destination: %s\n", val);
	printf("Source: %s\n", argv[1]);
	return (0);
}
