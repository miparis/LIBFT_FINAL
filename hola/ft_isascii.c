/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:31:23 by miparis           #+#    #+#             */
/*   Updated: 2023/09/13 10:22:36 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

//#include <ctype.h>
/*#include <stdio.h>
int main()
{
	int c = 02;
	printf("%d\n", ft_isascii(c));
	if(ft_isascii(c))
		printf("%c can be represented in ASCII\n", c);
	else
		printf("%c cannot be represented in ASCII\n", c);
	return 0;
}*/
