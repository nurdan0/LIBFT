/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:39:34 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/31 15:36:27 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	get_len(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;

	digit = get_len(n);
	str = (char *) ft_calloc(digit + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		*str = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(str, "-2147483648", digit + 1);
			return (str);
		}
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(str + --digit) = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
