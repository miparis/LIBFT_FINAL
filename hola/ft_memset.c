/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:55:40 by miparis           #+#    #+#             */
/*   Updated: 2023/09/22 12:52:54 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*placeholder;

	placeholder = b;
	while (len > 0)
	{
		*placeholder = c;
		placeholder++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "Hola,me llamo Miranda";
	char str1[] = "Hola,me llamo Miranda";

	printf("Before memset: %s\n", str);
	memset(str, 'C', 20*sizeof(char));
	printf("Len of the string: %zu | After memset: %s\n", ft_strlen(str), str);

	printf("Before ft_memset: %s\n", str1);
	ft_memset(str1, 'C', 20*sizeof(char));
	printf("Len of the string: %zu | After ft_memset: %s\n", ft_strlen(str), str1);
	return 0;
}*/
