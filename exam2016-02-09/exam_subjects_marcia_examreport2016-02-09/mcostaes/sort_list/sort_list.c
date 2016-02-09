/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 12:12:33 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 12:45:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*a;
	t_list	*b;
	t_list	*ava;
	t_list	*begin;

	a = lst;
	ava = lst;
	begin = lst;
	while(a && a->next)
	{
		b = a->next;
		if (cmp(a->data, b->data) == 0)
		{
			if (a == begin)
			{
				a->next = b->next;
				b->next = a;
				begin = b;
			}
			else
			{
				ava->next = b;
				a->next = b->next;
				b->next = a;
			}
			a = begin;
			ava = begin;
		}
		else
		{
			ava = a;
			a = a->next;
		}
	}
	return (begin);
}
