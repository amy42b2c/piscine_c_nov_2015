/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 21:10:34 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 15:57:34 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)			/* if nb given is less than or equal to 1, */
		return (0);			/* return nothing */
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)	/* if the rest of "i" is 0 (even number) */
		{					/* (because we divided by 2, it's even!) */
			return (0);
		}
		i++;				/* increment and test again */
	}
	return (1);
}
