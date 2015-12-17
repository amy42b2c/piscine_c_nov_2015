/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 00:03:20 by acresap           #+#    #+#             */
/*   Updated: 2015/12/18 00:20:44 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *wzye);

int	main(void)
{
	char *ptr;

	ptr = "this is my first string.";
	printf("The lenght of my string is: %d", ft_strlen(ptr));
}
