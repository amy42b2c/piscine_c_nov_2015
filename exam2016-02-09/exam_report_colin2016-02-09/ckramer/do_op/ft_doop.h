/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:40:12 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:34:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_DOOP_H
# define FT_DOOP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef	struct	s_opfunc
{
	char	oper;
	int		(*optnf)(int, int);
}				t_opfunc;

int			ft_do_action(char oper, int a, int b);
int			ft_add(int a, int b);
int			ft_sub(int a, int b);
int			ft_mul(int a, int b);
int			ft_div(int a, int b);
int			ft_mod(int a, int b);
#endif
