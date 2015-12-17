/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:16:11 by acresap           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/06 11:05:25 by acresap          ###   ########.fr       */
=======
/*   Updated: 2015/12/10 20:16:43 by acresap          ###   ########.fr       */
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i <= 'a')
	{
<<<<<<< HEAD
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
=======
		ft_putchar(i--);
	}
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
}
