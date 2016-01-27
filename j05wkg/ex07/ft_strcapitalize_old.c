/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:36:04 by acresap           #+#    #+#             */
/*   Updated: 2016/01/27 15:57:09 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;	/* to turn back to small letters */
			i++;
		}
		i = 0;
		if (str[i] >= 32 && str[i] <= 64)	/* ascii decimals for special chars */
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;		/* to capitalize */
			while (str[i] >= 'a' && str[i] <= 'z')
			{
				i++;
			}
		}
		return (str);
	}
	return (str);
}
