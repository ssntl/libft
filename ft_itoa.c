/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:23:35 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/21 19:51:49 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	size(int i)
{
	int	j;

	j = 0;
	if (i == 0)
		return (1);
	while (i)
	{
		i /= 10;
		i++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	long	j;

	j = n;
	i = size(n);
	if (n < 0)
		j *= -1;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	*(str + i--) = '\0';
	while (j > 0)
	{
		*(str + i--) = j % 10 + '0';
		j /= 10;
	}
	if (i == 0 && str[1] == '\0')
		*(str + i) = '0';
	else if (i == 0 && str[1])
		*(str + i) = '-';
	return (str);
}
