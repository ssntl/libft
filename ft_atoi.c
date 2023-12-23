/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:29:13 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 18:08:09 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * sign);
}

/*
#include <stdio.h>

int main() {
	const char *test_string = "-12345"; // Test string with a negative number

	int result = ft_atoi(test_string);
	printf("String: \"%s\", Converted value: %d\n", test_string, result);

    return 0;
}
*/
