/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:33:10 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/18 15:40:05 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	i = ft_lstlast(*lst);
	i->next = new;
}
/*
void print_all_ls(t_list *start)
{
	t_list *temp = start;
	while(temp->next != NULL)
	{	
		printf("ft_:%s\n", temp->content);
		temp = temp->next;
	}
	printf("ft_:%s\n", temp->content);
}

int	main()
{
	t_list *lst = ft_lstnew("start");
	t_list *gorkem = ft_lstnew("gorkem");
	t_list *sever = ft_lstnew("sever");
	ft_lstadd_back(&lst, gorkem);
	ft_lstadd_back(&gorkem, sever);
	print_all_ls(lst);	
}
*/