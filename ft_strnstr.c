/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:17:04 by miparis           #+#    #+#             */
/*   Updated: 2023/09/19 09:35:25 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	counter;

	i = 0;
	j = 0;
	counter = ft_strlen (needle);
	if (counter == 0)
		return ((char *)haystack);
	while ((haystack[i] != '\0') && ((i + counter) <= len))
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
		{
			if (j == (counter - 1))
				return ((char *) &haystack[i]);
			j++;
		}
	i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[30] = "Hello, world!";
	char	s2[] = "Hell\0o";
	char	*point;
	char	str[30] = "Hello, world!";
	char	to_find[] = "Hell\0o";
	char	*point2;
    size_t  size = 13;

	point = strnstr(s1, s2, size);
	point2 = ft_strnstr(str, to_find, size);
	printf("%s\n", point);
	printf("%s\n", point2);
	return 0;
}*/
