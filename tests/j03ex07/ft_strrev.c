/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 19:31:53 by acresap           #+#    #+#             */
/*   Updated: 2015/12/22 21:35:17 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	char	*sweepstr;
	int		strlen;

	sweepstr = str - 1;
	strlen = 0;
	while (*(++sweepstr))
		strlen++;
	return (strlen);
}

char	*ft_strrev(char *str)
{
	int		length;
	char	*begin;
	char	*end;
	int		k;
	char	tmp;

	length = ft_strlen(str);
	begin = str;
	end = str + length - 1;
	length = length >> 1;
	k = 0;
	while (++k <= length)
	{
		tmp = *begin;
		*(begin++) = *end;
		*(end--) = tmp;
		printf("\n%s\n", str);
	}
	return (str);
}
