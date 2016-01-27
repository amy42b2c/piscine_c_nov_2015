/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 10:36:40 by exam              #+#    #+#             */
/*   Updated: 2016/01/19 10:47:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aff(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha % 2 == 0)
			ft_aff(alpha - 32);
		else
			ft_aff(alpha);
		alpha++;
	}
	ft_aff('\n');
	return (0);
}
