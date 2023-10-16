/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:05:17 by miparis           #+#    #+#             */
/*   Updated: 2023/10/11 19:32:55 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*todelete;
	t_list	*nextnode;

	if (!list || !*list || !del)
		return ;
	todelete = *list;
	while (todelete)
	{
		nextnode = todelete ->next;
		ft_lstdelone(todelete, del);
		todelete = nextnode;
	}
	*list = NULL;
}
/*
void del(void *content)
{
	free(content);
}

#include  <stdio.h>
void print_list(t_list* lst)
{
	while (lst)
	{
		printf("%s\n", (char*)lst->content);
		lst = lst->next;
	}
}

int main(void)
{
	t_list *node;
	t_list *lista = NULL;

	node = ft_lstnew("hello!");
	ft_lstadd_back(&lista, node);
	node = ft_lstnew("2");
	ft_lstclear(&lista, del);
	print_list(lista);
}*/
