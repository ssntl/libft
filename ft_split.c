/* ************************************************************************** */
/*			*/
/*		:::	  ::::::::   */
/*   ft_split.c		 :+:	  :+:	:+:   */
/*			+:+ +:+		 +:+	 */
/*   By: bsaager <bsaager@student.42berlin.de>	  +#+  +:+	   +#+		*/
/*		+#+#+#+#+#+   +#+		   */
/*   Created: 2023/12/19 09:11:09 by bsaager		   #+#	#+#			 */
/*   Updated: 2023/12/23 22:23:35 by bsaager		  ###   ########.fr	   */
/*			*/
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
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

static int	safe_malloc(char **word_array, int pos, size_t buffer)
{
	int	i;

	i = 0;
	word_array[pos] = malloc(buffer);
	if (NULL == word_array[pos])
	{
		while (i < pos)
			free(word_array[i++]);
		free(word_array);
		return (1);
	}
	return (0);
}

static int	fill(char **word_array, char const *s, char c)
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
			if (safe_malloc(word_array, i, len + 1))
				return (1);
			ft_strlcpy(word_array[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**word_array;

	words = count_words(s, c);
	word_array = malloc(sizeof(char *) * (words + 1));
	if ((NULL == s) || (NULL == word_array))
		return (NULL);
	word_array[words] = NULL;
	if (fill(word_array, s, c))
		return (NULL);
	return (word_array);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	print_split_words(char **split_words)
{
	if (split_words) {
		while (*split_words) {
			printf("%s\n", *split_words);
			split_words++;
		}
	}
}

int main(void)
{
	const char	*input_str = "This is a test string";
	char 		delimiter = ' ';

	printf("Original String: \"%s\"\n", input_str);
	char		**split_result = ft_split(input_str, delimiter);
	if (split_result != NULL) {
		printf("Split Result:\n");
		print_split_words(split_result);
		// Free memory allocated for the split result
		char **temp = split_result;
		while (*temp)
		{
			free(*temp);
			temp++;
		}
		free(split_result);
	} else
		printf("Splitting failed.\n");
	return (0);
}
*/
