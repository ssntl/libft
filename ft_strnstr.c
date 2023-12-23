/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:31:36 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 21:13:19 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The strnstr() function locates the first occurrence of the null-terminated string
little in the string big, where not more than len characters are searched.  Char‐
acters that appear after a ‘\0’ character are not searched.  Since the strnstr()
function is a FreeBSD specific API, it should only be used when portability is
not a concern.

RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere in big,
NULL is returned; otherwise a pointer to the first character of the first occur‐
rence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little || (big == NULL && !len))
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*big_string = "This is a simple test string";
	const char	*search_string = "test";
	size_t		search_length = 35;
	char		*result = ft_strnstr(big_string, search_string, search_length);

	if (result != NULL)
	{
		printf("Original String: \"%s\"\n", big_string);
		printf("Substring \"%s\" found at position: %ld\n",
		 search_string, (long)(result - big_string));
	}
	else
		printf("Substring \"%s\" not found in the string.\n", search_string);
	return (0);
}
*/
