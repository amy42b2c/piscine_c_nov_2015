/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 10:27:13 by exam              #+#    #+#             */
/*   Updated: 2016/02/02 10:35:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int	i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
}

int		main(void)
{
	ft_countdown();
	ft_putchar('\n');
	return (0);
}
