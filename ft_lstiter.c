/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:41:54 by miparis           #+#    #+#             */
/*   Updated: 2023/10/11 20:17:46 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst ->content);
		lst = lst ->next;
	}
}
/*
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

	node = ft_lstnew("h");
	ft_lstadd_back(&lista, node);
	node = ft_lstnew("a");
	ft_lstadd_back(&lista, node);
	node = ft_lstnew("g");
	ft_lstiter(&lista, ft_toupper(*content));
	print_list(lista);
}*/
