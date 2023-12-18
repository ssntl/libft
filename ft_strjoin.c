char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*fail;
	char	len;

	i = 0;
	z = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(fail = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		fail[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		fail[i++] = s2[j++];
	fail[i] = '\0';
	return (fail);
}
