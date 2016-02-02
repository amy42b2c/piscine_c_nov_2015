/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 09:24:54 by acresap           #+#    #+#             */
/*   Updated: 2016/02/02 09:50:30 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		count;
	char	temp;

	len = ft_strlen(str);
	count = 0;
	while (count < (len / 2))
	{
		temp = str[count];
		str[count] = str[(len - 1) - count];
		str[(len - 1) - count] = temp;
		count++;
	}
	return (str);
}

int		main(void)
{
	char	*str1;
	char	*str2;

	str1 = "this is my string";
	str2 = ft_strrev(str1);
	return (0);
}
