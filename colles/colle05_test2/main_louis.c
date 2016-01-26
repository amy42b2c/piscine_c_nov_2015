/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_louis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acresap <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:28:11 by acresap           #+#    #+#             */
/*   Updated: 2016/01/26 19:28:53 by acresap          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	match(char *s1, char *s2);

// A function to run test cases
void test(char *s1, char *s2)
{
	match(s1, s2) ? puts("Yes, it MATCHES!") : puts("No, it doesn't match");
}

int main()
{
	printf("\n");
	printf("test(main.c, main.c): ");           test("main.c", "main.c");         // Yes
	printf("test(main.c, *.c): ");              test("main.c", "*.c");               // Yes
	printf("test(matin, m*tin): ");             test("matin", "m*tin");   // Yes
	printf("test(geeksforgeeks, ge**ks): ");    test("geeksforgeeks", "ge**ks*"); // Yes
	printf("test(abcd, **c*d): ");              test("abcd", "**c*d"); // Yes, because * can replace NULL
	printf("test(main salut matin, *a*m**a**n*): ");    test("main salut matin", "*a*m**a**n*");    // Yes
	printf("test(main salut matin, *a*m**n*): ");       test("main salut matin", "*a*m**n*");       // Yes
	printf("test(main salut matin.c, *.c): ");          test("main salut matin.c", "*.c");          // Yes
	printf("test(abcdhghgbcd, abc*bcd): "); test("abcdhghgbcd", "abc*bcd");                         // Yes
	printf("test(abcd, *c*d): "); test("abcd", "*c*d");                                             // Yes
	printf("test(abccd, abc*c**d): "); test("abccd", "abc*c**d");                                // Yes
	printf("test(NULL, NULL): "); test("", ""); // Yes -- enters the loop
	printf("test(abcde, a*de): "); test("abcde", "a*de");          // Yes, example ex01
	printf("test(abcbd, ): "); test("abcbd", "*b*");           // Yes, example ex01
	printf("test(abc, a**): "); test("abc", "a**");             // Yes, example ex01
	printf("test(abcbde, *b*e): "); test("abcbde", "*b*e");         // Yes
	printf("test(abcbde, *b**e): "); test("abcbde", "*b**e");        // Yes
	printf("\n");

	printf("test(joke, main.c): "); test("joke", "main.c");   // No
	printf("test(gee, g*k): "); test("gee", "g*k");         // No, because no 'k' in s1   -- didn't work
	printf("test(pqrst, *pqrs): "); test("pqrst", "*pqrs");     // No, because 't' is not in s2
	printf("test(abcd, abc*c**d): "); test("abcd", "abc*c**d");   // No, because s1 must have 2 instances of 'c'
	printf("\n");
	return 0;
}
