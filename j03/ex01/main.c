/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:46:34 by acresap           #+#    #+#             */
/*   Updated: 2015/12/30 13:01:32 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_ultimate_ft_a(int *a);
void	ft_ultimate_ft_b(int **bad);
void	ft_ultimate_ft_c(int ***c);
void	ft_ultimate_ft_d(int ****d);
void	ft_ultimate_ft_e(int *****e);
void	ft_ultimate_ft_f(int ******f);
void	ft_ultimate_ft_g(int *******g);
void	ft_ultimate_ft_h(int ********h);
void	ft_ultimate_ft(int *********i);

int		main(void)
{
	int n;
	int *a;
	int **bad;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********i;

	n = 3;
	a = &n;
	bad = &a;
	c = &bad;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	{
		ft_putnbr(n);
		ft_ultimate_ft(i);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_putchar('\n');
	}
	return (0);
}
