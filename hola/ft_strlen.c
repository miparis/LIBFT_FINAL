/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:46:32 by miparis           #+#    #+#             */
/*   Updated: 2023/09/14 09:18:10 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char *s = {"Texto de prueba. Cantidad de caracteres:"};
	char *s1 = {"Texto de prueba. Cantidad de caracteres:"};

	printf("%s\n", s);
	printf("%lu\n", strlen(s));
	printf("%s\n", s1);
	printf("%lu\n", ft_strlen(s));
	return (0);
}*/
