/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 19:04:03 by acresap           #+#    #+#             */
/*   Updated: 2016/01/07 16:54:30 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	dest2[100];
	/*char	src2[];*/

	/*dest2 = src2["sdfd"];*/
	ft_strcpy(dest2, "The best preparation for tomorrow is doing your \
best today.");
	printf("%s\n", dest2);
	return (0);
}
