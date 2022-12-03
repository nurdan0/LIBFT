/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:00:22 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/25 12:51:26 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dindex;
	size_t	sindex;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	dindex = ft_strlen(dst);
	sindex = 0;
	while (src[sindex] != '\0' && dindex + 1 < dstsize)
	{
		dst[dindex] = src[sindex];
		dindex++;
		sindex++;
	}
	dst[dindex] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[sindex]));
}