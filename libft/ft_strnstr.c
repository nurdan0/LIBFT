/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:26:54 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/26 13:22:24 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (!n_len)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		x = 0;
		while (haystack[i + x] == needle[x] && (i + x) < len)
		{
			if (haystack[i + x] == '\0' && needle[x] == '\0')
				return ((char *)&haystack[i]);
			x++;
		}
		if (needle[x] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
