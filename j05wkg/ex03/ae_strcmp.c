/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_ae.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 13:31:41 by acresap           #+#    #+#             */
/*   Updated: 2016/01/15 13:38:48 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	/* counter for index i */
	int i;

	i = 0;
	/* tant que not at end of table s1 AND s2... */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* if s1 is not equal to s2: strings not the same */
		if (s1[i] != s2[i])
			/* then return the result of (addr s1 - addr s2) */
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
