/*
 * The C library function char *gets(char *str) reads a line from stdin 
 * and stores it into the string pointed to by str. It stops when either 
 * the newline character is read or when the end-of-file is reached, 
 * whichever comes first.
 */

/* 
 * Because gets does not take a length parameter, it doesn't know how large your input buffer is. If you pass in a 10-character buffer and the user enters 100 characters -- well, you get the point.
 *
 * fgets is a safer alternative to gets because it takes the buffer length as a parameter, so you can call it like this:
 *
 * fgets(str, 10, stdin);
 * and it will read in at most 9 characters.
 *
 * the problem is now some of my codes are not working anymore
 * This is possibly because fgets also stores the final newline (\n) character in your buffer -- if your code is not expecting this, you should remove it manually:
 *
 * int len = strlen(str);
 * if (len > 0 && str[len-1] == '\n')
 *   str[len-1] = '\0';
 */


#include <stdio.h>
#include <string.h>

int	match(char text[], char pattern[])
{
	int c;
	int	d;
	int	e;
	int	text_length;
	int	pattern_length;
	int	position = -1;

	text_length = strlen(text);
	pattern_length = strlen(pattern);

	if (pattern_length > text_length)
	{
		return (-1);
	}
	for (c = 0; c <= text_length - pattern_length; c++)
	{
		position = e = c;
		for (d = 0; d < pattern_length; d++)
		{
			if (pattern[d] == text[e])
			{
				e++;
			}
			else
			{
				break ;
			}
		}
		if (d == pattern_length)
		{
			return (position);
		}
	}
	return (-1);
}

int	main()
{
	char	a[100];
	char	b[100];
	int		position;

	printf("Enter some text\n");
	gets(a);

	printf("Enter a string to find\n");
	gets(b);

	position = match(a, b);

	if (position != -1)
	{
		printf("Found at location %d\n", position + 1);
	}
	else
	{
		printf("Not found.\n");
	}

	return (0);
}
