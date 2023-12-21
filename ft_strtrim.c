/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:22:51 by bsaager           #+#    #+#             */
/*   Updated: 2023/12/21 23:25:30 by bsaager          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*noset;

	start = 0;
	end = ft_strlen(s1) -1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		++start;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		--end;
	if (start > end)
		return (ft_strdup(""));
	noset = malloc((end - start) + 2);
	if (NULL == noset)
		return (NULL);
	ft_strlcpy(noset, s1 + start, (end - start) + 2);
	return (noset);
}
