
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		compte(char *abc)
{
	char	*balayeur;
	int		longeur;

	balayeur = abc;
	longeur = 0;
	while (balayeur[longeur] != '\0')
	{
		balayeur++;
		longeur++;
	}
	return (longeur);
}

int		main(void)
{
	char	*my_string;

	my_string = "This is another string test.";
	ft_putstr(compte(my_string));
	return (0);
}
