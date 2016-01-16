/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:47:59 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 15:27:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*ptr;

	if (begin_list == 0 || f == 0)
		return ;
	ptr = begin_list;
	if (ptr->data != 0)
		(*f)(ptr->data);
	while (ptr->next != (t_list *)0)
	{
		ptr = ptr->next;
		if (ptr->data != 0)
			(*f)(ptr->data);
	}
 	return ;
}
