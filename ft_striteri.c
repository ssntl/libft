/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   ft_striteri.c	  :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: bsaager <bsaager@student.42berlin.de>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2023/12/21 19:24:04 by bsaager	   #+#	#+#	 */
/*   Updated: 2023/12/23 22:40:27 by bsaager	  ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
// Sample function to print characters and their indices
void	print_char_index(unsigned int index, char *ch)
{
	printf("Character at index %u: %c\n", index, *ch);
}

int	main(void)
{
	char input_str[] = "Hello, World!";

	printf("Original String: \"%s\"\n", input_str);
	ft_striteri(input_str, print_char_index);
	return (0);
}
*/
