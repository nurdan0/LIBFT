/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:14 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/26 11:48:45 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	new = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (new[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
