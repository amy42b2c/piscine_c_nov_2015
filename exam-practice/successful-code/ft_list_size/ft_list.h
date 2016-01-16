/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:48:11 by exam              #+#    #+#             */
/*   Updated: 2015/12/12 13:52:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_LIST
# define	FT_LIST

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int ft_list_size(t_list *begin_list);

#endif
