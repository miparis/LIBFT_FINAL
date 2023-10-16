/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:44:02 by miparis           #+#    #+#             */
/*   Updated: 2023/10/05 16:58:08 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main() 
{
    int fd = 1; // Using file descriptor 1 for standard output (stdout)
    char character = '%'; // Character to be written
    ft_putchar_fd(character, fd); // Call the function to write the character

    return 0;
}*/
