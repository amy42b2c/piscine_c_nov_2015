#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int		j;
	char	c;

	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] != '\0')
		{
			c = argv[1][j];
			if (c >= 'A' && c <= 'Z')
				c = c + 32;
			else
				if (c >= 'a' && c <= 'z')
					c = c - 32;
			ft_putchar(c);
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
