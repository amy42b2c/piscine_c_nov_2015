/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 00:05:46 by acresap           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/15 19:05:30 by acresap          ###   ########.fr       */
=======
/*   Updated: 2015/12/10 18:14:12 by acresap          ###   ########.fr       */
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

<<<<<<< HEAD
int		ft_test(int a, int b)
{
		if ((a == 98) && (b ==99))
		{
			return (1);
		}
		else
		{ 
			return (0);
		}
}

void	ft_two_numbers(int a, int b)
{
	int	div_a;
	int mod_a;
	int div_b;
	int mod_b;

	div_a = a/10;
	mod_a = a%10;
	div_b = b/10;
	mod_b = b%10;
	if (ft_test (a, b) == 0)
	{
		ft_putchar(div_a + '0');
		ft_putchar(mod_a + '0');
		ft_putchar(' ');
		ft_putchar(div_b + '0');
		ft_putchar(mod_b + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
	else if (ft_test (a, b) == 1)
	{
		ft_putchar(div_a + '0');
		ft_putchar(mod_a + '0');
		ft_putchar(' ');
		ft_putchar(div_b + '0');
		ft_putchar(mod_b + '0');
	}
=======
void	ft_two(void)
{
	int	a;
	int b;

	a = 0;
	b = 0;
	ft_putchar(a/10 + '0');
	ft_putchar(a%10 + '0');
	ft_putchar(b/10 + '0');
	ft_putchar(b%10 + '0');
	if (! (a = 98) && (b = 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

<<<<<<< HEAD
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_two_numbers(a, b);
			b++;
		}
=======
	a = '1';
	b = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_putchar(a);
			ft_putchar(',');
			ft_putchar(' ');
			ft_putchar(b);
			b++;
		}
		b = a + 1;
>>>>>>> 2e11b931527c7e3d442aac32c9c596b0aa70b647
		a++;
	}
}
