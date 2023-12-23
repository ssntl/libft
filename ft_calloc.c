/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:29:29 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 18:45:35 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, nmemb * size);
	return (buffer);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t count		= 32;
	size_t element_size	= sizeof (int);
	int *arr = (int *)ft_calloc(count, element_size);

	if (arr != NULL)
	{
		printf("Memory allocated successfully.\n");
		free(arr);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}
*/
