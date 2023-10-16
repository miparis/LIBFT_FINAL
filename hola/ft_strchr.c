/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:45:32 by miparis           #+#    #+#             */
/*   Updated: 2023/09/29 10:26:49 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			len;
	size_t			i;
	unsigned char	d;

	d = (unsigned char) c;
	len = ft_strlen(s);
	i = 0;
	while ((i <= len))
	{
		if (s[i] == d)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char    *s = {"0x10be27a40"};
    int c = '0';

    printf("%d\n", strchr(s, 't' + 256) == s);
    printf("%d\n", ft_strchr(s, 't' + 256) == s);
    return (0);
}*/
