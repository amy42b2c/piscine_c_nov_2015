/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 00:02:28 by acresap           #+#    #+#             */
/*   Updated: 2015/12/18 00:20:46 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*balayeur;
	int		longeur;

	balayeur = str;
	longeur = 0;
	while (*balayeur != 0x00)
	{
		balayeur++;
		longeur++;
	}
	return (longeur);
}
