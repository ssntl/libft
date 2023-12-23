/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:23:35 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 22:52:35 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int i)
{
	size_t	j;

	j = 0;
	if (i <= 0)
		j++;
	while (i)
	{
		i /= 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	num = n;
	len = ft_size(num);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	*str = ft_itoa(-2134);

	printf("%s\n", str);
	str = ft_itoa(42);
	printf("%s\n", str);
	str = ft_itoa(707);
	printf("%s\n", str);
	str = ft_itoa(INT_MIN);
	printf("%s\n", str);
	str = ft_itoa(INT_MAX);
	printf("%s\n", str);
	str = ft_itoa(0);
	printf("%s\n", str);
	return (0);
}
*/
