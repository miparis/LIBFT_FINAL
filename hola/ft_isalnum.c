/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:04:32 by miparis           #+#    #+#             */
/*   Updated: 2023/09/13 09:27:57 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9' ) || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main()
{
	int c = 'ñ';
	printf("%d\n", isalnum(c));
	if(isalnum(c))
		printf("%c is alphanumeric\n", c);
	else
		printf("%c is not alphanumeric\n", c);
	return 0;
}*/
