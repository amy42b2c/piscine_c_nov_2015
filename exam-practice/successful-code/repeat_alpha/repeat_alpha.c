/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 12:12:34 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 14:16:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_nputchar(char c, int nb)
{
		int	k;
		k = 0;
		while(k <= nb)
		{
			ft_putchar(c);
			k++;
		}
}

int		main(int argc, char **argv)
{
	char *param1;
	int		i;
	int		index;
	
	param1 = argv[1];
	i = 0;
	if(argc != 2)
		{
		ft_putchar('\n');
		return (0);
		}
	while(param1[i] != '\0')
		{
		index = 0;
		if(param1[i] >= 'A' && param1[i] <= 'Z')
			index = param1[i] - 'A';
		else if(param1[i] >= 'a' && param1[i] <= 'z')
			index = param1[i] - 'a';
		else
			index = 0;	
			ft_nputchar(param1[i], index);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
