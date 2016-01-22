/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:40:09 by acresap           #+#    #+#             */
/*   Updated: 2016/01/22 14:57:32 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);		/* if found char other than number */
	}
		return (1);			/* if chaine vide or all numbers */
}
