/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 13:14:35 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 13:58:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return(len);
}

char	**ft_split(char *str)
{
	char 	**tab=NULL;
	int		i;
	int		flag_m;
	int		flag_b;

	tab =(char**)malloc(sizeof(*tab) * (ft_strlen(str) + 1));
	if(!tab)
		return ((void*)0);
	i = 0;
	flag_m = 1;
	flag_b = 1;
	while(str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			flag_b = 1;
			i++;
			if(i == ft_strlen(str))
				break;
		}
		if(i == ft_strlen(str))
			break;
		if (flag_m && flag_b)
		{
			*tab = str;
			tab++;
			flag_b = 0;
			flag_m = 1;
		}
		i++;
	}
	*tab = NULL;
	return (tab);
}
