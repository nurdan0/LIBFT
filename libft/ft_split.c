/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:54:36 by nsahinog          #+#    #+#             */
/*   Updated: 2022/11/01 14:08:39 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

unsigned int	ft_word_counter(const char *s, char c)
{
	unsigned int	index;

	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			index++;
		}
	}
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	str = (char **) ft_calloc(ft_word_counter(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	a = -1;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			str[++a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(str[a], s - j, j + 1);
		}
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	const char *a = ",,nurdan,,nurdan,,nurdan";
	char b = ',';

	char	**sonuc = ft_split(a, b);
	while (*sonuc)
	{
		printf("%s\n", *sonuc);
		sonuc++;
	}
}*/
