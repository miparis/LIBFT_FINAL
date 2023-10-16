/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 02:21:04 by miparis           #+#    #+#             */
/*   Updated: 2023/10/12 02:46:04 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;
	void	*content;

	newlst = NULL;
	if (!del || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst ->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst ->next;
	}
	return (newlst);
}
