/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:56:39 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 17:23:07 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*newstr;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	newstr = malloc(len + 1);
	if (!newstr)
		return (0);
	while (i < len)
	{
		newstr[i] = s1[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str = NULL;
    //char *strduplicate = strdup(str);
    char *ft_strduplicate = ft_strdup(str);

    printf("Original: %s\n", str);
   // printf("Original_uplicate: %s\n", strduplicate);
    printf("ft_duplicate: %s\n", ft_strduplicate);

    free(ft_strduplicate);
	//free(strduplicate);
    return(0);
}*/
