/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 12:43:26 by exam              #+#    #+#             */
/*   Updated: 2016/01/26 12:57:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	char	i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_countdown();
	return (0);
}
