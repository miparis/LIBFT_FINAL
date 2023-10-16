/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:30:47 by miparis           #+#    #+#             */
/*   Updated: 2023/09/29 10:27:43 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*last_match;
	unsigned char	d;

	d = (unsigned char) c;
	last_match = (char *)s;
	i = ft_strlen(s);
	if (d == '\0')
		return (last_match + i);
	while ((i != 0))
	{
		if (last_match[i] == d)
			return (last_match + i);
		i--;
	}
	if (s[0] == d)
		return (last_match);
	return (0);
}
