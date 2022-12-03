/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:56:55 by nsahinog          #+#    #+#             */
/*   Updated: 2022/11/01 15:02:47 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new ->content = content;
	new ->next = NULL;
	return (new);
}

/*
void	f_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*str = NULL;
	t_list	*str2 = ft_lstnew("nurdan");

	ft_lstadd_back(&str, str2);
	ft_lstadd_back(&str, ft_lstnew("sahinoglu"));
	ft_lstadd_front(&str, ft_lstnew("gülbahar"));
	/*int	i = ft_lstsize(str);
	while (str->next)
	{
		printf("%s\n",str->content);
		str = str->next;
	}
	printf("%s\n",str->content);
	printf("%d",i);
	ft_lstdelone(&str,f_del);

	printf("%s",ft_lst);
}
*/
