/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:47:59 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 14:28:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*ptr;

	if (begin_list == 0)
		return (0);
	i = 1;
	ptr = begin_list;
	while (ptr->next != (t_list *)0)
	{
		ptr = ptr->next;
		i++;
	}
 	return (i);
}
