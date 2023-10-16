/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:56:39 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 17:26:42 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    int *number;
    size_t i = 0;

    number = (int *)malloc(4294967295 * sizeof(int));

    if(number == NULL)
        printf("memory name couldnt be allocated\n");
    else
    {
        while ((argv[1][i] != '\0'))
        {
            number[i] = argv[1][i];
            i++;
        }
    }
    printf("Position %lu !\n", number);
    //memory should be freed in functions
    free(number);
    return(0);
}
*/
