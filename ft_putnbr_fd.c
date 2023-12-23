/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:25:20 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/23 20:21:35 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = (unsigned int)(n * -1);
	}
	else
		i = (unsigned int)n;
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((char)(i % 10 + 48), fd);
}

/*
int	main(void)
{
	int	file_descriptor = 1;

	ft_putnbr_fd(42, file_descriptor);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, file_descriptor);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, file_descriptor);
	return (0);
}
*/
