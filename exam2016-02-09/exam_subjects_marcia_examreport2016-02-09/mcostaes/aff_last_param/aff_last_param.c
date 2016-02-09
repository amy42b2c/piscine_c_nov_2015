/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:03:30 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 10:10:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char *s;

	s = str;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	main(int c, char **v)
{
	char n;

	n = '\n';
	if (c > 1)
		ft_putstr(v[c-1]);
	write(1, &n, 1);
	return (0);
}
