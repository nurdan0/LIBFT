/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:29:23 by nsahinog          #+#    #+#             */
/*   Updated: 2022/11/01 14:31:27 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include<stdio.h>
int	main(void)
{
	int	fd = open("nurdan.txt", O_RDWR | O_CREAT);

	if (fd < 0)
		return (-1);
	ft_putchar_fd('N',fd);
}*/
