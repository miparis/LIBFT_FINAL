/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:45:08 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 11:26:43 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static char	*ft_custommalloc(size_t size, int n)
{
	char	*strmem;

	if (n > 0)
		strmem = malloc(sizeof(char) * (size + 1));
	if (n <= 0)
		strmem = malloc(sizeof(char) * (size + 2));
	return (strmem);
}

static char	*ft_writedigit(char *str, int n, int i)
{
	if (n > 0)
	{
		str[i] = '\0';
		i--;
		while (i >= 0)
		{
			str[i--] = (n % 10) + '0';
			n /= 10;
		}
	}
	if (n < 0)
	{
		str[i + 1] = '\0';
		while (i > 0)
		{
			str[i--] = (-n % 10) + '0';
			n /= 10;
		}
		str[0] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	aux;
	size_t		size;
	int			i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = 0;
	if (n >= 0)
		aux = n;
	if (n < 0)
		aux = -n;
	while (aux > 0)
	{
		aux /= 10;
		size++;
	}
	i = size;
	str = ft_custommalloc(size, n);
	if (!str)
		return (0);
	str = ft_writedigit(str, n, i);
	return (str);
}
/*
#include <limits.h>
#include <stdio.h>

int main ()
{
    int number = 89;

    //printf("Minimum value of int: %d\n", INT_MIN);
    //printf("Maximum value of int: %d\n", INT_MAX);
    printf("The integer as a string: %s\n", ft_itoa(number));
    return (0);
}*/
