/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:12:57 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 15:13:11 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev_table(char *str);

int		main(void)
{
	char	ptr[] = "abcde";

	printf("\nThe string input is %s\n", ptr);
	ft_strrev_table(ptr);
	printf("\nThe new string is %s\n", ptr);
	return (0);
}
