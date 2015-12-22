/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:46:34 by acresap           #+#    #+#             */
/*   Updated: 2015/12/22 15:08:33 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_ultimate_ft(int *nbr);
void	ft_ultimate_ft2(int **nbr);
void	ft_ultimate_ft3(int ***nbr);
void	ft_ultimate_ft4(int ****nbr);
void	ft_ultimate_ft5(int *****nbr);
void	ft_ultimate_ft6(int ******nbr);
void	ft_ultimate_ft7(int *******nbr);
void	ft_ultimate_ft8(int ********nbr);
void	ft_ultimate_ft9(int *********nbr);

int		main(void)
{
	int n;
	int *nbr;
	int **nbr2;
//	int **nbr2b;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr9;

	n = 3;
	nbr = &n;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;	
	nbr6 = &nbr5;	
	nbr7 = &nbr6;	
	nbr8 = &nbr7;	
	nbr9 = &nbr8;	
	{
		ft_putnbr(n);
		ft_ultimate_ft(nbr);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft2(nbr2);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft3(nbr3);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft4(nbr4);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft5(nbr5);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft6(nbr6);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft7(nbr7);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft8(nbr8);
		ft_putchar('\n');
		ft_putnbr(n);
		ft_ultimate_ft9(nbr9);
		ft_putchar('\n');
		ft_putnbr(n);
	}
	return (0);
}
