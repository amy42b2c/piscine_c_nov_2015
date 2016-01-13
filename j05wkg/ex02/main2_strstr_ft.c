/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:11:04 by acresap           #+#    #+#             */
/*   Updated: 2016/01/13 14:18:06 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	val;

	sign = +1;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	if (*str == '+')
		str++;
	val = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			val = (val * 10) + (*str - '0');
		else
			return (val * sign);
		str++;
	}
	return (val * sign);
}

int	main(int argc, char **argv)
{
//	char	s1[] = "my House is small.";
//	char	s2[] = "My Car is green.";

	if (argc != 2)
		return (0);
	if (ft_atoi(argv[1]) < 0)
		return (0);
	if (ft_atoi(argv[1]))
		strstr(ft_atoi(argv[1]));

//	printf("Returned String 1: %s\n", strstr (s1, "House"));
//	printf("Returned String 2: %s\n", strstr (s2, "Car"));
}
