/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:30:47 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/21 17:42:49 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  memcmp()  function compares the first n bytes (each interpreted as unsigned
char) of the memory areas s1 and s2.

RETURN VALUE
The memcmp() function returns an integer less than, equal to,  or  greater  than
zero  if  the  first  n  bytes of s1 is found, respectively, to be less than, to
match, or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of the difference
between the first pair of bytes (interpreted as unsigned char) that differ in s1
and s2.

If n is zero, the return value is zero.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*str1;
	char		*str2;
	size_t		i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
