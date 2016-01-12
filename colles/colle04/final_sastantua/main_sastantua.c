/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sastantua.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 19:18:02 by acresap           #+#    #+#             */
/*   Updated: 2016/01/12 19:26:13 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	sastantua(int size);
int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (ft_atoi(argv[1]) < 0)
		return (0);
	if (ft_atoi(argv[1]))
		sastantua(ft_atoi(argv[1]));
	return (0);
}
