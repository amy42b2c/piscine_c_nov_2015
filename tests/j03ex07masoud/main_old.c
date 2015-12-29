/* ************************************************************************** */
/*                                                                            */
/*   won't work w/out malloc!                             :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:12:57 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 17:44:52 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
//	char	ptr[0];
	char	ptr[] = "abcdef";

//	ptr[0] = "abcdef";
	printf("\nThe string input is %s\n", ptr);
	ft_strrev(ptr);
	printf("\nThe new string is %s\n", ptr);
	return (0);
}
