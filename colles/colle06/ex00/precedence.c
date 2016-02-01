/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precedence.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 14:42:19 by acresap           #+#    #+#             */
/*   Updated: 2016/02/01 15:15:07 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	precedence(char c)
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
