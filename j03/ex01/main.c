/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:46:34 by acresap           #+#    #+#             */
/*   Updated: 2015/12/21 11:31:23 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_putchar(char c);

int		main(void)
{
	int n;
	int *********nbr;

	n = 3;
	nbr = &n;
	ft_putnbr(*********nbr);
	ft_ultimate_ft(*********nbr);
	ft_putchar('\n');
	ft_putnbr(n);
	return (0);
}
