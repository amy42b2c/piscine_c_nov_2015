/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:46:34 by acresap           #+#    #+#             */
/*   Updated: 2015/12/22 17:44:24 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
//void	ft_ultimate_ft_a(int *nbr);
//void	ft_ultimate_ft_b(int **nbr2);
//void	ft_ultimate_ft_c(int ***nbr3);
//void	ft_ultimate_ft_d(int ****nbr4);
//void	ft_ultimate_ft_e(int *****nbr5);
//void	ft_ultimate_ft_f(int ******nbr6);
//void	ft_ultimate_ft_g(int *******nbr7);
//void	ft_ultimate_ft_h(int ********nbr8);
//void	ft_ultimate_ft(int *********nbr9);
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
//	int n;
//	int *nbr;
//	int **nbr2;
//	int ***nbr3;
//	int ****nbr4;
//	int *****nbr5;
//	int ******nbr6;
//	int *******nbr7;
//	int ********nbr8;
//	int *********nbr9;
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

//	n = 50;
//	nbr = &n;
//	nbr2 = &nbr;
//	nbr3 = &nbr2;
//	nbr4 = &nbr3;
//	nbr5 = &nbr4;
//	nbr6 = &nbr5;
//	nbr7 = &nbr6;
//	nbr8 = &nbr7;
//	nbr9 = &nbr8;
	n = 3;
	i = &n;
	a = &bad;
	bad = &c;
	c = &d;
	d = &e;
	e = &f;
	f = &g;
	g = &h;
	h = &i;
	{
		ft_putnbr(n);
		ft_ultimate_ft(i);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_putchar('\n');
	}
	return (0);
}
