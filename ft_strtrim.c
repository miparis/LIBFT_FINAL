/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:24:28 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 17:16:45 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while ((i < j) && ft_strchr(set, s1[i]))
		i++;
	while ((j > i) && ft_strchr(set, s1[j]))
		j--;
	len = j - i + 1;
	str = ft_substr(s1, i, len);
	return (str);
}
