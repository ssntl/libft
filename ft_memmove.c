/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:30:53 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:07:36 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The  memmove() function copies n bytes from memory area src to memory
	area dest.
	The memory areas may overlap: copying takes place as though
	the bytes in src are
	first  copied  into a temporary array that does not overlap src or dest, and the
	`bytes are then copied from the temporary array to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];

	ft_memmove(dest, src, strlen(src) + 1);
	printf("Copied string using ft_memmove: %s\n", dest);
	char	dest2[20];
	memmove(dest2, src, strlen(src) + 1);
	printf("Copied string using memmove: %s\n", dest2);
	if (strcmp(dest, dest2) == 0)
		printf("Both strings are identical.\n");
	else
		printf("Strings are different.\n");
	return (0);
}
*/
