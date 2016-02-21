/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_louis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:17:35 by acresap           #+#    #+#             */
/*   Updated: 2016/01/26 20:19:38 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		match(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		ft_putchar(s1[i]);
		ft_putchar(s2[i]);
		i++;
	}
	ft_putchar('\n');
	if (s1[i] == '\0')
		return (1);
	return (0);
}
