/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_michele.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:20:03 by acresap           #+#    #+#             */
/*   Updated: 2015/12/17 10:45:03 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	digit;
	int	counter;
	int	nb2;

	digit = nb;
	counter = 0;
	nb2 = 0;
	while (digit > 10)
	{
		digit = digit / 10;
		nb = nb2;
		counter++;
		while (digit > 10)
		{
			digit = digit / 10;
		}
		ft_putchar(digit + '0');
	}
	ft_putchar(digit + '0');
}
