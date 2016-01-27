// Adrien

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int n;
	int taille;

	taille = -1;
	if (nb < 0)
		ft_putchar('-');
	else 
		nb = -nb;
	n = nb;
	while ((n /= 10) < 0)
	{
		taille = taille * 10;
	}
	while (taille < 0)
	{
		ft_putchar((nb / taille) + '0');
		nb %= taille;
		taille /= 10;
	}
}