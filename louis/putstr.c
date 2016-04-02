#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *string)
{
	int		i;

	i = 0;
	while (string[i] != '\0')
	{
		ft_putchar(string[i]);
		i++;
	}
}

int		main(void)
{
	ft_putstr("This is my test string");
	return (0);
}
