/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:34:43 by nsahinog          #+#    #+#             */
/*   Updated: 2022/11/01 14:54:38 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
#include <fcntl.h>
int main()
{
	char *s ="nurdan";
	char *s1 = "sahinoglu";
	char *s2 = "1233";
	char *s3 = "0987";

	int fd = open("nurdan.txt", O_RDWR | O_CREAT);
	ft_putendl_fd(s,fd);
	ft_putstr_fd(s1, fd);
	ft_putendl_fd(s2,fd);
	ft_putstr_fd(s3, fd);
}*/
