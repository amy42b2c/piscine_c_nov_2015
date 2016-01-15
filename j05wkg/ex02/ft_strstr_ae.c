/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_ae.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 14:26:51 by acresap           #+#    #+#             */
/*   Updated: 2016/01/14 14:35:16 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')		/* if "to_find[0]" is at the end of table? */
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = i;
			while (to_find[j - i] == str[j])
				j++;
			if (to_find[j - i] == '\0' || to_find[j - i - 1] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
