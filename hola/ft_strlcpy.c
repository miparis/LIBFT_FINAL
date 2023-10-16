/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:35:34 by miparis           #+#    #+#             */
/*   Updated: 2023/09/29 18:20:33 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = ft_strlen(src);
	if (size == 0)
		return (counter);
	while ((i < size -1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (counter);
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
	const char src[] = "555";	
	size_t size = 0;
	char destination[size];
	char dest[size];
	
	printf ("Source lenght: %lu\n", strlcpy(destination, src, size));
	printf ("Destination: %s\n", destination);
	ft_strlcpy(dest, src, size);
	printf("Source lenght: %lu\n",ft_strlcpy (dest, src, size));
	printf("Destination: %s\n", dest);
	return (0);
}*/
