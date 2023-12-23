/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:40:42 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 21:40:45 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
char upper(unsigned int i, char str)
{
	printf("running upper at index %d: %c\n", i, str);
	return (str - 32);
}

int	main(void)
{
	char	*str = "hello_world";
	printf("The result is %s\n", str);
	char	*result = ft_strmapi(str, upper);
	printf("The result is %s\n", result);
	return 0;
}
*/
