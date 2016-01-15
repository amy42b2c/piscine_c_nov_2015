/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 12:43:05 by acresap           #+#    #+#             */
/*   Updated: 2016/01/15 13:53:30 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	/* while addr of s1 is equal to addr of s2... */
	while (*s1++ == *s2++)
	{
		/* and if addr of s1 AND addr of s2 are at the end of the string */
		if (*s1 == '\0' && *s2 == '\0')
			/* return 0 -- return an int to the "int l" in the main */
			return (0);
	}
	/* if addr s1 not equal addr s2, then decrease by 1 and subtract */
	return (*--s1 - *--s2);
}

/* Need to compare two strings. When you subtract the addres of one from the
 * address of the other, you it returns the value in ascii numbers. 
 * Check the man ascii to see the deci values to verify that the subtraction
 * is correct.  */
