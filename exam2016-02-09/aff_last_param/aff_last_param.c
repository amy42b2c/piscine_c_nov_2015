/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:04:13 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:44:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_last_param(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putchar('\n');
	else if (argc > 1)
	{
		aff_last_param(argv[argc - 1]);
		ft_putchar('\n');
	}
	return (0);
}
