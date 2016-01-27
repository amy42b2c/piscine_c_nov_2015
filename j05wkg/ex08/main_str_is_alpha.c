/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str_is_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 20:31:07 by acresap           #+#    #+#             */
/*   Updated: 2016/01/22 10:17:41 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	string1[] = "Ineedtowriteonlylettersforittowork";
	printf("alpha only = 1  [%d]\n", ft_str_is_alpha(string1));
	ft_putchar('\n');
	char	string2[] = "I need to write only letters for it to work";
	printf("spec. chars = 0 [%d]\n", ft_str_is_alpha(string2));
	ft_putchar('\n');
	char	string3[] = "Ineedtowrit5eonlylet9tersforittowork";
	printf("spec. chars = 0 [%d]\n", ft_str_is_alpha(string3));
	ft_putchar('\n');
	return (0);
}
