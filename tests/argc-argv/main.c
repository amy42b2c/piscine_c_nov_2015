/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 20:04:47 by acresap           #+#    #+#             */
/*   Updated: 2016/01/08 21:09:47 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	ft_putstr("bonjour ");
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		ft_putstr("usage: ./a.out toto\n");
		return (0);
	}
	ft_putchar('\n');
	return (0);
}
