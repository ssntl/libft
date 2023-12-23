/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:30:57 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:10:40 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  memset()  function  fills  the  first  n(len)  bytes of the memory area
       pointed to by s with the constant byte c.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (len-- > 0)
		*(ptr++) = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>
#include <string.h> // Include for the original memset function

int	main(void)
{
	char	str[20];

	ft_memset(str, 'A', 10);
	printf("String after using ft_memset: %s\n", str);
	char	str2[20];
	memset(str2, 'A', 10);
	printf("String after using memset: %s\n", str2);
	if (strcmp(str, str2) == 0)
		printf("Both strings are identical.\n");
	else
		printf("Strings are different.\n");
	return (0);
}
*/
