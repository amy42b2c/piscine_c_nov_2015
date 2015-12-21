/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_abc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 09:42:42 by acresap           #+#    #+#             */
/*   Updated: 2015/12/21 18:42:42 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int 	ft_print_abc(void)
{
	char variable;

	variable = 'a';
	while (variable <= 'z')
	{
		ft_putchar(variable);
		variable = variable + 1;
	}
	return (0);
}