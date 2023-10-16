/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:03:33 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 17:24:24 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char *s1 = "";
   	char *s2 = "hOLA\0djfnfjns";
	int size = ft_strlen(s1) + ft_strlen(s2);
	char	*strjoin = ft_strjoin(s1, s2);
    printf("New string: %s\n", strjoin);
	//printf("Comparison: %d",strncmp(strjoin, "where is my malloc ???",size));
	return (0);
}*/
