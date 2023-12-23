/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:24:58 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:17:42 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
int	main(void)
{
	int	file_descriptor = 1;

	ft_putendl_fd("Hello, World!", file_descriptor);
	ft_putendl_fd(NULL, file_descriptor);
	ft_putendl_fd("", file_descriptor);
	return (0);
}
*/
