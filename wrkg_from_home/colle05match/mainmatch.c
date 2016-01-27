#include <stdio.h>
#include <string.h>

//int	ft_strcmp(char *s1, char *s2);
int	match(char *s1, char *s2);

int	main(void)
{
	char	*string1;
	char	*string2;
	char	*string3;
	char	*string4;
	char	*string5;
	char	*string6;
	
	string1 = "main.c";
	string2 = "main.c";		/* match = 1 */
	string3 = "*.c";		/* matches using '*' = 1 */
	string4 = "m*in.c";		/* matches using '*' = 1 */
	string5 = "m**n.c";		/* matches using '*' = 1 */
	string6 = "mini.c";		/* doesn't match = 0 */

	printf("\n");
	/* print the strings */
	printf("Original String1 is [%s].\n", string1);
	printf("	 String2 is [%s].\n", string2);
	printf("	 String3 is [%s].\n", string3);
	printf("	 String4 is [%s].\n", string4);
	printf("\n");
	/* Return 1 if match, else return 0. */
	printf("Retour de match str2:   [%d].\n", match(string1, string2));
	printf("\n");
	printf("Retour de match str3:   [%d].\n", match(string1, string3));
	printf("\n");
	printf("Retour de match str4:   [%d].\n", match(string1, string4));
	printf("\n");
	printf("Retour de match str5:   [%d].\n", match(string1, string5));
	printf("\n");
	printf("Retour de match str6:   [%d].\n", match(string1, string6));
	printf("\n");
	return (0);
}