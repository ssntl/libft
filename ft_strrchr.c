/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:31:40 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/22 20:37:07 by bsaager          ###   ########.fr       */
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
