/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:33:37 by miparis           #+#    #+#             */
/*   Updated: 2023/09/22 12:48:03 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "Hola,me llamo Miranda";
	char str1[] = "Hola,me llamo Miranda";

	printf("Before memset: %s\n", str);
	bzero(str + 2, 2*sizeof(char));
	printf("Len of the string: %zu | After memset: %s\n", ft_strlen(str), str);

	printf("Before ft_memset: %s\n", str1);
	ft_bzero(str1 + 2, 2*sizeof(char));
	printf("Len of the string: %zu | After ft_memset: %s\n", ft_strlen(str), str1);
	return 0;
}*/
