/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:13:12 by miparis           #+#    #+#             */
/*   Updated: 2023/09/27 13:22:39 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstcpy;
	unsigned char	*srccpy;

	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			dstcpy[len] = srccpy[len];
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[] = " World";
    char dst[8] = "Hello";
    char dst1[8] = "Hello";

    printf("Dest before: %s\n", dst);
    printf("Dest1 before: %s\n", dst1);
    //printf("Dest after memmove: %s\n", memmove(dst, src, 10));
    printf("Dest after ft_memmove: %s\n", ft_memmove(dst1, src, 10));
    return(0);
}*/
