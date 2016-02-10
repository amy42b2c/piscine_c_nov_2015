/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_action.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:45:41 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:31:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		ft_do_action(char oper, int a, int b)
{
	int			i;
	t_opfunc	f[5];

	f[0].oper = '+';
	f[1].oper = '-';
	f[2].oper = '*';
	f[3].oper = '/';
	f[4].oper = '%';
	f[0].optnf = &ft_add;
	f[1].optnf = &ft_sub;
	f[2].optnf = &ft_mul;
	f[3].optnf = &ft_div;
	f[4].optnf = &ft_mod;
	i = 0;
	while (i < 5)
	{
		if (f[i].oper == oper)
		{
			f[i].optnf(a, b);
			return (2);
		}
		i++;
	}
	return (0);
}
