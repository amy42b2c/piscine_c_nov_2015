/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:43:32 by mleblond          #+#    #+#             */
/*   Updated: 2016/01/04 20:11:54 by mleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *str, char *to_find)
{
	while ((*to_find != '\0') || (*str != '\0'))
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
		}
		else
			break ;
	}
	if (*to_find == '\0')
		return (0);
	else
		return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == 0)
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
			if (ft_match(str, to_find) == 0)
				return (str);
		str++;
	}
	return (0);
}
