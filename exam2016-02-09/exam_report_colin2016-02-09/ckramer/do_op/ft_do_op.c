/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:01:13 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:35:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	if((ft_do_action(argv[2][0], atoi(argv[1]), atoi(argv[3])) == 2))
		printf("\n");
	else
		return(0);
}
