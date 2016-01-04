/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:12:57 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 17:57:23 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strrev(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char	*ptr;
	char	*ptr2;

	ptr = "abcdef";
	ptr2 = malloc(ft_strlen(ptr) + 1);
	ft_strcpy(ptr2, ptr);
	printf("The length of my string is: %d", ft_strlen(ptr2));
	printf("\nThe string input is %s\n", ptr2);
	ft_strrev(ptr2);
	printf("\nThe new string is %s\n", ptr2);
	free(ptr2);
	return (0);
}
