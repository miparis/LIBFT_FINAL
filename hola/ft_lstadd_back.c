/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:48:43 by miparis           #+#    #+#             */
/*   Updated: 2023/10/11 17:20:10 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		n = ft_lstlast(*lst);
		n -> next = new;
	}
}
/*
void print_list(t_list* lst)
{
	while (lst)
	{
		printf("%s\n", (char*)lst->content);
		lst = lst->next;
	}
}
#include  <stdio.h>

int main(void)
{
	t_list *node;
	t_list *lista = NULL;

	node = ft_lstnew("1");
	ft_lstadd_back(&lista, node);
	node = ft_lstnew("2");
	ft_lstadd_back(&lista, node);
	node = ft_lstnew("3");
	ft_lstadd_back(&lista, node);
	print_list(lista);
}*/
