/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miparis <miparis@student.42madridcom>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:34:53 by miparis           #+#    #+#             */
/*   Updated: 2023/10/10 17:15:23 by miparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		sign = 1 - 2 * (str[i] == '-');
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

static int	ft_isspace(int c)
{
	if ((c == ' ' || c == '\t' || c == '\v' || \
		c == '\n' || c == '\f' || c == '\r'))
		return (1);
	return (0);
}
/*
int main(int argc, char	*argv[])
{
	(void) argc;
	printf("%i %i\n", ft_atoi(" \t\v\n\r\f123"), atoi(" \t\v\n\r\f123"));	
	return(0);	
}*/
