/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:40:11 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 10:59:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int 	l;

	l = 0;
	while (*(s + l))
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = (char*)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!s)
		return ((void*)0);
	i = 0;
	while (*(src + i))
	{
		*(s + i) = *(src + i);
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
