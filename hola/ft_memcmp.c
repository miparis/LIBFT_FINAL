/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:12:55 by miparis           #+#    #+#             */
/*   Updated: 2023/09/27 12:43:01 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h> 

int main(void)
{
    int str1[] = {2, 4, 6, 5};
    int str2 []= {2, 3, 7, 0};

    printf("%i\n",  memcmp(str1, str2, 20));
    printf("%i\n",  ft_memcmp(str1, str2, 20));
    return (0);
}*/
