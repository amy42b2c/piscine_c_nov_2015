/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:46:34 by acresap           #+#    #+#             */
/*   Updated: 2015/12/21 10:53:46 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nbr);
void	ft_ft(int *nbr);
void	ft_putchar(char c);

int		main(void)
{
	int	*nbr;
	int	n;

	nbr = &n;
	n = 0;
	ft_ft(nbr);
	ft_putnbr(n);
	ft_putchar('\n');
	return (0);
}
