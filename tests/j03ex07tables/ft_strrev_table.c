/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 19:31:53 by acresap           #+#    #+#             */
/*   Updated: 2015/12/28 12:52:16 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strrev_table(char *str)
{
	int		len;
	int		count;
	char	tmp;

	len = ft_strlen(str);
	count = 0;
	while (count < len / 2)
	{
		tmp = str[count];
		str[count] = str[(len - 1) - count];
		str[(len - 1) - count] = tmp;
		count = count + 1;
	}
	return (str);
}
