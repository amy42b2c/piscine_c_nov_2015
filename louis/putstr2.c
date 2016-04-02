
#include <unistd.h>
#include <stdio.h>

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
	int		longeur;

	longeur = 0;
	while (abc[longeur] != '\0')
	{
		longeur++;
	}
	return (longeur);
}

int		count(char *def)
{
	int		len;
	char	*tmp;

	len = 0;
	tmp = def;
	while (*tmp != '\0')
	{
		tmp++;
		len++;
		//printf("%c\n", *def);
	}
	return (len);
}

int		main(void)
{
	char	*my_string;

	my_string = "other string test.";
	ft_putstr(compte(my_string));
	return (0);
}
