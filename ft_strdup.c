/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:31:03 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/21 19:18:03 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  strdup() function returns a pointer to a new string which is a duplicate of
the string s.  Memory for the new string is obtained with malloc(3), and can  be
freed with free(3).
RETURN VALUE
On success, the strdup() function returns a pointer to  the  duplicated  string.
It returns NULL if insufficient memory was available, with errno set to indicate
the cause of the error.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
