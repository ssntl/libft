/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:29:18 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 18:14:08 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}
/*
	void *s: A pointer to the memory area where zeroing will occur.
	0: The value to be set (in this case, 0 represents the null byte
	or zero-value byte).
	size_t len: The number of bytes to set to zero, starting from the address s.
*/
/*
#include <stdio.h>

int main() {
	char	test_string[] = "Hello, World!";
	size_t	len = ft_strlen(test_string);

	printf("Before bzero: %s\n", test_string);
	ft_bzero(test_string, len);
	printf("After bzero: %s\n", test_string);
	return (0);
}
*/
