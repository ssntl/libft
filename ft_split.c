/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:11:09 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/22 18:33:54 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// count words or substrings
size_t	count_words(char const *s, char c)
{
	size_t	words;
	int		flag;

	words = 0;
	while (*s)
	{
		flag = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			if (flag == 0)
			{
				words++;
				flag = 1;
			}
			s++;
		}
	}
	return (words);
}

int	safe_malloc(char **something, int pos, size_t buffer)
{
	int	i;

	i = 0;
	something[pos] = malloc(buffer);
	if (NULL == something[pos])
	{
		while (i < pos)
			free(something[i++]);
		free(something);
		return (1);
	}
	return (0);
}

int	fill(char **something, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(something, i, len + 1))
				return (1);
			ft_strlcpy(something[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**something;

	words = count_words(s, c);
	something = malloc(sizeof(char *) * (words + 1));
	if ((NULL == s) || (NULL == something))
		return (NULL);
	something[words] = NULL;
	if (fill(something, s, c))
		return (NULL);
	return (something);
}
