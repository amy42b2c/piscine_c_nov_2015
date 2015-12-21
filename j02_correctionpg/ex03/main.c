/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:21:10 by acresap           #+#    #+#             */
/*   Updated: 2015/12/21 14:21:50 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_is_negative(int n);

int		main(void)
{
	ft_is_negative(21);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(-89);
	ft_putchar('\n');
	ft_is_negative(-2147483648);
	ft_putchar('\n');
	return (0);
}
