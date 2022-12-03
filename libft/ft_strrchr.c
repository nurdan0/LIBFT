/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:23:08 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/25 14:27:22 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	idx;

	idx = ft_strlen((char *)s);
	while (idx >= 0)
	{
		if (*(s + idx) == c)
			return ((char *)(s + idx));
		idx--;
	}
	return (0);
}
