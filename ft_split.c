/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:11:09 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/22 00:12:40 by bsaager          ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		
	}

//malloc the words by passing through string again and counting len of substr

//fill the new substrings with the words
//array ends with NULL pointer
}


int	main()
{
	char *s = "Hello, World! "
	**ft_split(*s, ' ');
	return (0);
}
