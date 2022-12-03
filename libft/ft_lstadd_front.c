/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:03:26 by nsahinog          #+#    #+#             */
/*   Updated: 2022/10/31 12:41:26 by nsahinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new ->next = *lst;
	*lst = new;
}
/*
#include<stdio.h>
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
// student2 -> student1 -> student0 -> lst
int	main()
{
	t_list *lst = ft_lstnew("start");
	t_list *student0 = ft_lstnew("student0");
	t_list *student1 = ft_lstnew("student1");
	t_list *student2 = ft_lstnew("student2");
	ft_lstadd_front(&lst, student0);
	ft_lstadd_front(&lst, student1);
	ft_lstadd_front(&lst, student2);
	print_all_ls(lst);
}
*/
