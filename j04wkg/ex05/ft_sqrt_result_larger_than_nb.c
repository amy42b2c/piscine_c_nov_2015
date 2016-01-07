/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 10:35:06 by acresap           #+#    #+#             */
/*   Updated: 2016/01/07 12:31:35 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	given;
	int	result;

	given = 0;
	while (1)
	{
		result = given * given;
		if (result == nb)
			return (given);
		if (result > nb)
			return (0);
		given++;
	}
	return (0);
}
