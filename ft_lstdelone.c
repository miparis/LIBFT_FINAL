/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:51:13 by miparis           #+#    #+#             */
/*   Updated: 2023/10/11 18:33:19 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(del)(lst -> content);
	free (lst);
	lst = NULL;
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
	ft_lstdelone(node, del);
	print_list(lista);
}*/
