/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 11:32:49 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 15:48:41 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	r;

	r = ft_is_prime(nb);		/* call previous ft to test if prime or not */
	if (r == 1)					/* if answer comes back "1", */
	{
		return (nb);			/* return the number */
	}
	while (r != 1)				/* if result came back "not 1" or "0", */
	{
		nb++;					/* increment and */
		r = ft_is_prime(nb);	/* test again... until you find the next one */
	}
	return (nb);				/* and return the number found. */
}
