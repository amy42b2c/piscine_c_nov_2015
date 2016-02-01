/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsOperand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:35:58 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 11:24:56 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	IsOperand(char c)
{
	if (c > '0' && c < '9')
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	c = 7;
	printf("number returned: %d\n", IsOperand(c));
	//printf("number returned: %d\n", c);
}
