/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:11:04 by acresap           #+#    #+#             */
/*   Updated: 2016/01/13 12:32:06 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[] = "His Car is small.";
	char	s2[] = "My Car is green.";

	printf("Returned String 1: %s\n", strstr (s1, "House"));
	printf("Returned String 2: %s\n", strstr (s2, "Car"));
}
