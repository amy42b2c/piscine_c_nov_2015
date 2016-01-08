/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 10:05:32 by acresap           #+#    #+#             */
/*   Updated: 2016/01/08 11:40:10 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char			*dest2;
	unsigned int	n;

	n = 10;
	dest2 = (char *)malloc(sizeof(dest2) * (n + 1));
	ft_strncpy(dest2, "The best prep for tomorrow: do your best today.", n);
	printf("%s\n", dest2);
	return (0);
}
