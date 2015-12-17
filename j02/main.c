/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:21:10 by acresap           #+#    #+#             */
/*   Updated: 2015/12/17 18:07:33 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_print_reverse_alphabet(void);
int		ft_print_numbers(void);
void	ft_print_comb2(void);
void	ft_print_comb(void);
void	ft_print_alphabet(void);
void	ft_is_negative(int n);
void	ft_putchar(char c);

int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	ft_print_numbers();
	ft_putchar('\n');
	ft_is_negative(21);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_print_comb();
	ft_putchar('\n');
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
