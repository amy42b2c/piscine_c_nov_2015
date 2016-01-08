/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 19:04:03 by acresap           #+#    #+#             */
/*   Updated: 2016/01/08 16:06:48 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	tab2[] = "this is a test, longer than source";
	char	tab1[] = "n'importe quoi";
	char	*dest2;
	char	*src2;

	dest2 = tab1;
	src2 = tab2;
	printf("Original Destination : %s\n", dest2);
	printf("Source: %s\n", src2);
	printf("New Destination: %s\n", ft_strcpy(dest2, src2));
	return (0);
}
