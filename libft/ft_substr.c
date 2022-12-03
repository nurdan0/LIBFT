/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:36:55 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/27 13:32:08 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!s || !start || !len)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (len > 0)
	{
		str[i] = s[start - 1];
		i++;
		start++;
		len--;
	}
	return (str);
}
