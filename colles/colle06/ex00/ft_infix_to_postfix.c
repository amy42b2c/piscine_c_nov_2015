/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InfixToPostfix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 14:03:14 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 18:15:22 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_operand(char c)
{
	if (c > '0' && c < '9')
		return (1);
	return (0);
}

int		ft_is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int		ft_precedence(char c)
{
	if (c == '%' || c == '*' || c == '/')
		return (2);
	if (c == '+' || c == '-')
		return (1);
	return (0);
}
/*
{
	if (c == '-')
		return (1);
	if (c == '+')
		return (2);
	if (c == '/')
		return (3);
	if (c == '*')
		return (4);
	if (c == '%')
		return (5);
	return (0);
}
*/

// q = arithmetic expression // p = postfix expression 
// s = stack (table for memory)
char	ft_infix_to_postfix(char *q)
{
	char	*p;
	char	*s;

	*p = '\0';
	*s = '\0';
	while (*q != '\0')
	{
		if (ft_is_operand[*q] == 1)
		{
			*p = *q;
			p++;
			q++;
		}
		if (*q == '(')
			*s = *q;
		if (*q == ')')
		{
			while (*s != '\0' && *s != ')')
			{
				*s = *q;
			}
		//	*s != ')';
		}
		if (ft_is_operator[*q] == 1)
		{
			if (*s == '\0' || *s == '(')
				*s = *q;
			else
			{
				while (*s != '\0' && *s != '(' &&
						(ft_precedence[*q] <= ft_precedence[*s]))
				{
					*p = *s;
					p++;
					s--;
				}
// is this right?				*s = *p;
			}
		}
		q++;
	}
}
