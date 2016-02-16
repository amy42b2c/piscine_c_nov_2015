/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 12:04:17 by acresap           #+#    #+#             */
/*   Updated: 2016/02/16 12:17:53 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
//	{
		ft_putchar(*str++);
//		str++;
//	}
}




int		main(void)
{
	char string[] = "this is my string";

	ft_putstr(string);
	ft_putchar('\n');
	return (0);
}
