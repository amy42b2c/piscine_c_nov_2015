/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:37:45 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 14:37:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_LIST
# define	FT_LIST

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif
