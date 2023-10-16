/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:41:42 by miparis           #+#    #+#             */
/*   Updated: 2023/09/20 15:23:38 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (((c1[i]) || (c2[i])) && (i < n))
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

int	main(void)
{
	int	result;
	int result1;

	result = strncmp("abcdef", "abcdefghijklmnop", 6);
	result1 = ft_strncmp("abcdef", "abcdefghijklmnop", 6);
	printf("%d\n", result);
	printf("%d\n", result1);
	return (0);
}*/
