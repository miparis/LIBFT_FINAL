/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:32:03 by miparis           #+#    #+#             */
/*   Updated: 2023/09/13 11:08:29 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main()
{
	int c = 127;
	printf("%d\n", ft_isprint(c));
	if(ft_isprint(c))
		printf("%c can be printed\n", c);
	else
		printf("%c cannot be printed\n", c);
	return 0;
}*/
