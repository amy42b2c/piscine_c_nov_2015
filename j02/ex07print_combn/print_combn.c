
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}




void	ft_print_combn(int n)
{
	while (n > 0)
	{
		ft_putchar(n);
		ft_putchar('\n');
	}
}




int		main(void)
{
	int	nbr;

	nbr = 0;
	ft_print_combn(nbr);
//	ft_putchar(48 + 1);
//	ft_putchar('\n');
//	ft_putchar(48 + 2);
//	ft_putchar('\n');
//	printf("test 1 is %c\n", ft_print_combn(5));
	return (0);
}
