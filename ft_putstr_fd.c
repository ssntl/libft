/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:24:36 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:24:11 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
/*
int	main(void)
{
	int	file_descriptor = 1;

	ft_putstr_fd("This is a string", file_descriptor);
	write(1, "\n", 1);
	ft_putstr_fd("This is a also a string", file_descriptor);
	write(1, "\n", 1);
	ft_putstr_fd("42", file_descriptor);
	return (0);
}
*/
