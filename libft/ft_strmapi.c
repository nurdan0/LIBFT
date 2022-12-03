/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:47:08 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/29 16:56:37 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	index;

	if (!s)
		return (NULL);
	new_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
/*
char	*f(unsigned int i, char c)
{
	char	*a;

	a = 'n';
	return (a);
}

int	main()
{
	printf("%s",ft_strmapi("xxxxxx",*f));
}*/
