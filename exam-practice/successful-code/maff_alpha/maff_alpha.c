#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		j;
	char	c;

	j = 'a';
	while (j <= 'z')
	{
		c = j;
		if (c / 2 * 2 == j)
			c = c - 32;
		ft_putchar(c);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
