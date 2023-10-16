/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:22:17 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 17:16:09 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	strlen;
	size_t			len_substr;
	char			*substr;

	strlen = (size_t)ft_strlen(s) + 1;
	if ((start >= strlen) || (len == 0))
		len_substr = 1;
	else if (len >= strlen - start)
		len_substr = strlen - start;
	else
		len_substr = len + 1;
	substr = malloc(sizeof(char) * (len_substr));
	if (substr == NULL)
		return (NULL);
	if (strlen > start)
		ft_strlcpy(substr, s + start, len_substr);
	else
		substr[0] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "";
	char *newstr;

	newstr = ft_substr(s, 1, 1);
	printf("Original string: %s\n", s);
	printf("Return string: %s || Lenght: %zu\n", newstr, strlen(newstr));
	return(0);
}*/
