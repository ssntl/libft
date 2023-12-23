/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:30:50 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:04:31 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The  memcpy() function copies n bytes from memory area src to memory area dest.
	The memory areas must not overlap.
	Use memmove(3) if the memory areas do overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char	src[] = "Hello, World!";
	char	dest[20];

	ft_memcpy(dest, src, strlen(src) + 1);
	printf("Copied string using ft_memcpy: %s\n", dest);
	char	dest2[20];
	memcpy(dest2, src, strlen(src) + 1);
	printf("Copied string using memcpy: %s\n", dest2);
	if (strcmp(dest, dest2) == 0)
		printf("Both strings are identical.\n");
	else
		printf("Strings are different.\n");
	return (0);
}
*/
