/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:30:57 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/21 17:44:43 by bsaager          ###   ########.fr       */
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
