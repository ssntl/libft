/*        The strrchr() function returns a pointer to the last occurrence of the character c in the string s. */

char	*strrchr(const char *s, int c)
	{
		int	i,

		i = ft_strlen(s);
		if (c == 0)
			return ((char *)s + i);
		while (i >= 0)
		{
			if (s[i] == c)
				return ((char *)s + i);
			i--;
		}
		return (NULL);
	}
