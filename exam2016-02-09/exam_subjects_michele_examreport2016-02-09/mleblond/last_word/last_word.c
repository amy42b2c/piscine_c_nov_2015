/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:18:31 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 13:35:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char	*str)
{
	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *s)
{
	char	*src;
	int		len;

	src = s;
	len = 0;
	while (*src != '\0')
	{
		len++;
		src++;
	}
	return (len);
}

char	*last_word(char *s)
{
	char	*str;
	int		i;
	
	str = s;
	i = (ft_strlen(s) - 1);
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		i--;
	while (i >= 0)
	{
		if (s[i] != ' ' && s[i] != '\t')
			i--;
		else
			break;
	}
	i++;
	return (str + i);
}

int		main(int argc, char **argv)
{
	if (argc != 2 || argv[1] == '\0')
		ft_putchar('\n');
	else
	{
		ft_putstr(last_word(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
