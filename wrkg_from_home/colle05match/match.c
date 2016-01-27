int	match(char *s1, char *s2)
{
	char	i;
	
	while (*s1++ == *s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);						/* if s1 == s2 */
		while (*s2 == '*')
		{
			i = *s2;
			i++;
		}
		return (1);							/* if s1 == s2 */
	}
	return (0);								/* if s1 != s2 */
}