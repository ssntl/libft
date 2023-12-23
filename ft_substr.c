/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:21:53 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 21:02:56 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (start >= ft_strlen(s))
	{
		str = ft_calloc(1, sizeof(char));
		if (!str)
			return (NULL);
		return (str);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char		*original_str = "This is a test string";
	unsigned int	start_index = 5;
	size_t 			substr_length = 7;
	char 			*sub_string = ft_substr(original_str, start_index, substr_length);

	if (sub_string != NULL)
	{
		printf("Original String: %s\n", original_str);
		printf("Substring from index %u with length %zu: %s\n",
		start_index, substr_length, sub_string);
		free(sub_string);
	}
	else
		printf("Substring extraction failed.\n");
	return (0);
}
*/
