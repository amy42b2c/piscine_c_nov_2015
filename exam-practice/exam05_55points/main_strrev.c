int	ft_strlen(char	*str)
{
	char	*len;

	*len = *str;
	while (*str != '\0')
	{
		*len = *len + 1;
	}
	return (len);
}

int	main(void)

{
	char	*string;

	*string = "abcdefghijklm nopqrstuvwxyz";

	ft_strlen(*string);
//	*ft_strrev(string);
	return (0);
}
