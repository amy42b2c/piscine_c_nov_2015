/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parametres.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:42:58 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 10:06:29 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int nombredeparam_argc, char *table_argv[])
{
	int k;

	k = -1;
	while (++k < nombredeparam_argc)
	{
		printf("\n%d %s", k, table_argv[k]);
	}
	return (15);
}
