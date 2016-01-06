/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 18:18:27 by acresap           #+#    #+#             */
/*   Updated: 2016/01/05 19:11:10 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	ft_strrev(char *str)
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
