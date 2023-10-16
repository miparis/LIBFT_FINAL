/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:17:46 by miparis           #+#    #+#             */
/*   Updated: 2023/09/27 10:07:06 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srccpy;
	unsigned char	*destcpy;

	i = 0;
	srccpy = (unsigned char *)src;
	destcpy = (unsigned char *)dst;
	if ((!srccpy) && (!destcpy))
		return (0);
	while (n > i)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (dst);
}
