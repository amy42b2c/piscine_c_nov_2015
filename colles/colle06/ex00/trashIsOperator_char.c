/* ************************************************************************** */
/*                                                                            */
/*   TEST                                                 :::      ::::::::   */
/*   IsOperator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:14:21 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 10:35:36 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	IsOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (c);
	return ('0');
}

int		main(void)
{
	char	c;

	c = '+';
	//printf("character returned: %c\n", IsOperator(c));
	printf("character returned: %c\n", c);
}
