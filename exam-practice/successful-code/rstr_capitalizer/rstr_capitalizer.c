#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_mecaniquer(char *s)
{
	char	*ns;
	char	c;

	ns = s;
	while (*ns)
	{
		c = *(ns + 1);
		if (c == ' ' || c == '\t' || c == '\0')
		{
			if (*ns >= 'a' && *ns <= 'z')
				*ns -= 32;
		}
		else
		{
			if (*ns >= 'A' && *ns <= 'Z')
				*ns += 32;
		}
		ft_putchar(*ns);
		ns++;
	}
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int		j;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	j = 1;
	while (j < argc)
	{
		ft_mecaniquer(argv[j]);
		j++;
	}
	return (0);
}
