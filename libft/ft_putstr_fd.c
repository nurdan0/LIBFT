/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:31:02 by nsahinog          #+#    #+#             */
/*   Updated: 2022/11/01 14:42:33 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		idx;

	if (!s)
		return ;
	idx = 0;
	while (s[idx])
	{
		ft_putchar_fd(s[idx], fd);
		idx++;
	}
}
/*
#include"stdio.h"
#include <fcntl.h>
int main()
{
	char *s = "nurdan";
	int fd = open("nurdan.txt", O_RDWR| O_CREAT);
	ft_putstr_fd(s,fd);
}*/
