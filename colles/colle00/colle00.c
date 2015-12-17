/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:13:29 by dcastela          #+#    #+#             */
/*   Updated: 2015/11/24 10:49:15 by dcastela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	defchar(int col, int endcol, int lin, int endlin)
{
	char c;

	c = '|';
	if ((lin == 1 || lin == endlin) && (col == 1 || col == endcol))
	{
		c = 'o';
	}
	if ((lin == 1 || lin == endlin) && (col != 1 && col != endcol))
	{
		c = '-';
	}
	if (lin != 1 && lin != endlin && col != 1 && col != endcol)
	{
		c = ' ';
	}
	return (c);
}

void	colle(int nbcolumns, int nblines)
{
	int		line;
	int		column;
	char	c;

	line = 1;
	while (line <= nblines)
	{
		column = 1;
		while (column <= nbcolumns)
		{
			c = defchar(column, nbcolumns, line, nblines);
			ft_putchar(c);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
