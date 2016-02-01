/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsOperator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:14:21 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 11:24:49 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	IsOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	c = '+';
	printf("character returned: %d\n", IsOperator(c));
}
