/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:31:40 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 21:10:26 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strrchr() function returns a pointer to the last occurrence
 of the character c in the string s.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((char) c == *(s + i))
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
const char	*test_string = "Hello, World!";
int			search_character = 'o';
char		*result = ft_strrchr(test_string, search_character);

	if (result != NULL)
	{
		printf("String: \"%s\"\n", test_string);
		printf("Last occurrence of '%c' found at position: %ld\n",
		 search_character, (long)(result - test_string));
	}
	else
		printf("Character '%c' not found in the string.\n", search_character);
	return (0);
}
*/
