/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:28:24 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/31 15:38:38 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*i;
	t_list	*x;

	if (!lst)
		return (NULL);
	x = NULL;
	while (lst)
	{
		i = ft_lstnew(f(lst->content));
		if (!i)
		{
			ft_lstclear(&x, del);
			return (NULL);
		}
		ft_lstadd_back(&x, i);
		lst = lst->next;
	}
	return (x);
}
