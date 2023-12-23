/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   ft_strncmp.c	   :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: bsaager <bsaager@student.42berlin.de>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2023/12/19 09:09:49 by bsaager	   #+#	#+#	 */
/*   Updated: 2023/12/23 21:14:09 by bsaager	  ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

/* basically same as ft_strcmp but only comparing up to size_t n chars in s1*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
const char *string1 = "Hello";
const char *string2 = "Hell";
size_t comparison_length = 5; // Length for comparison

// Perform string comparison using ft_strncmp
int result = ft_strncmp(string1, string2,comparison_length);

	if (result == 0)
		printf("Strings are equal for the first %zu characters.\n",
		 comparison_length);
	else if (result < 0)
	{
		printf("String 1 is smaller than String 2 for the first %zu characters.\n"
		, comparison_length);
	}
	else
	{
		printf("String 1 is greater than String 2 for the first %zu characters.\n",
	 	comparison_length);
	}
	return (0);
}
*/
