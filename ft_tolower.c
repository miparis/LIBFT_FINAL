/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:16:31 by miparis           #+#    #+#             */
/*   Updated: 2023/09/18 13:16:33 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z' ))
		return (c + 32);
	else
		return (c);
}

/*#include <ctype.h>
int main(void)
{
    char    input = 'AAA';
    
    printf("%c\n", tolower(input));
    printf("%c\n", ft_tolower(input));
}*/
