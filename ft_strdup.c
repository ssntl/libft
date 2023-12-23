/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   ft_strdup.c	:+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: bsaager <bsaager@student.42berlin.de>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2023/12/19 09:31:03 by bsaager	   #+#	#+#	 */
/*   Updated: 2023/12/23 22:35:56 by bsaager	  ###   ########.fr	   */
/*	*/
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
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char	*input_str = "Hello, World!";
	// Duplicate the input string using ft_strdup
	char	*duplicate_str = ft_strdup(input_str);

	if (duplicate_str != NULL) {
		printf("Original String: \"%s\"\n", input_str);
		printf("Duplicated String: \"%s\"\n", duplicate_str);
		free(duplicate_str);
	} else
		printf("Duplication failed.\n");
	return (0);
}
*/
