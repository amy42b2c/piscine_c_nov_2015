/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:27:49 by acresap           #+#    #+#             */
/*   Updated: 2016/01/27 15:56:50 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	string[] = "we are the -chaMpions, but [dfsf]{*&^%$# not.";
	printf("My string: [%s]\n", ft_strcapitalize(string));
	return (0);
}
