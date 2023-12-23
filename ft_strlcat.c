/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:31:13 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:57:06 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The strlcpy() and strlcat() functions copy and concatenate strings respectively
They are designed to be safer, more consistent,
and less error prone replacements
for strncpy(3) and strncat(3).  Unlike those functions, strlcpy() and strlcat()
take the full size of the buffer (not just the length) and guarantee to
NUL-termi‐
nate the result (as long as size is larger than 0 or, in the case of strlcat(),
as long as there is at least one byte free in dst).
Note that a byte for the NUL
should be included in size.
Also note that strlcpy() and strlcat() only operate
on true “C” strings.
This means that for strlcpy() src must be NUL-terminated and
for strlcat() both src and dst must be NUL-terminated.
The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

RETURN VALUES
The strlcpy() and strlcat() functions return the total length of the string they
tried to create.  For strlcpy() that means the length of src.  For strlcat() that
means the initial length of dst plus the length of src.  While this may seem
somewhat confusing, it was done to make truncation detection simple.
Note, however, that if strlcat() traverses size characters without finding a NUL,
the length of the string is considered to be size and the destination string will
not be NUL-terminated (since there was no space for the NUL).  This keeps
strlcat() from running off the end of a string.  In practice this should not hap‐
pen (as it means that either size is incorrect or that dst is not a proper “C”
string).
The check exists to prevent potential security problems in incorrect
code.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	size_t		srclen;

	srclen = ft_strlen(src);
	if (NULL == dst && 0 == size)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (srclen + size);
	else
		size -= dstlen;
	ft_strlcpy(dst + dstlen, src, size);
	return (dstlen + srclen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[100] = "Tomorrow is Christmas";
	char	src[] = " and I am sitting here coding tests.";
	printf("%zu\n", ft_strlen(dst));
	printf("%zu\n", ft_strlcat(dst, src, 59));
	printf("%s", dst);
	return (0);
}
*/
