/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:38:22 by miparis           #+#    #+#             */
/*   Updated: 2023/09/18 13:02:52 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z' ))
		return (c - 32);
	else
		return (c);
}

/*#include <ctype.h>
int main(void)
{
    char    input = 'PPPPPPA';
    
    printf("%c\n", toupper(input));
    printf("%c\n", ft_toupper(input));
}*/
