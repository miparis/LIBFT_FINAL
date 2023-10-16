/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:16:57 by miparis           #+#    #+#             */
/*   Updated: 2023/09/29 10:25:59 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	d = (unsigned char) c;
	i = 0;
	while ((i < n))
	{
		if (str[i] == d)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
