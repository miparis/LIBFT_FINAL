/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:09:19 by miparis           #+#    #+#             */
/*   Updated: 2023/09/22 10:01:54 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	j = 0;
	if (dstsize < len_dst)
		return (len_src + dstsize);
	while ((len_dst + 1 < dstsize) && (src[j] != '\0'))
	{
		dst[len_dst] = src[j];
		j++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (len_dst - j + len_src);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "123";
	char	dst[] = "";
	char	*dst2 = strdup(dst);
	int		results[2];
	int		expected[2];

	expected[0] = strlen(src) + strlen(dst);
	expected[1] = strlen(src) + strlen(dst);
	//dst[10] = 'a';
	results[0] = strlcat(dst, src, 0);
	results[1] = ft_strlcat(dst2, src, 0);
	printf("%i %i ORIGINAL: %d %s FT: %d %s"
	, expected[0], expected[1],  results[0],dst, results[1], dst2);
}*/
