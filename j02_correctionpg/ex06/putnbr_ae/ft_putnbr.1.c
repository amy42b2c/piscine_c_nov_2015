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
		nb = nb * (-1);					// nb = -nb;
	n = nb;
	while ((n = n / 10) < 0)			// while ((n /= 10) < 0)
	{
		taille = taille * 10;
	}
	while (taille < 0)
	{
		ft_putchar((nb / taille) + '0');
		nb = nb % taille;				// nb %= taille;
		taille = taille / 10;			// taille /= 10;
	}
}