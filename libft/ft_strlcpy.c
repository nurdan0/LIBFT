/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:52 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/24 16:28:14 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		idx;
	size_t		count;

	idx = 0;
	count = 0;
	if (!dst || !src)
		return (0);
	while (src[count])
		count++;
	while (src[idx] && idx + 1 < dstsize)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize)
		dst[idx] = '\0';
	return (count);
}
