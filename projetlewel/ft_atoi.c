/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:32:18 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/11 22:48:21 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int ft_return(int c)
{
	if (c == 1)
		return (-1);
	else
		return (0);
}
int	ft_atoi(const char *str)
{
	int	c;
	size_t z;
	int	i;

	i = 0;
	z = 0;
	c = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' 
			|| str[i] == '\f' || str[i] == '\n' || str[i] == '\v' )
		i++;
	if (str[i] == '-' || str[i]=='+')
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		z = 10 * z + (str[i] - '0');
		if (z > 9223372036854775807)
			return (ft_return(c));
		else 
			i++;
	}
	i=(int)z;
	i *= c;
	return (i);
}
int main()
{
	char p[] = "926465423372036854775806";
	//printf("%d\n", i);
	//const char p[]=" \n-92233720368547758085468545";
	printf("%d\n",atoi(p));
	printf("%d",ft_atoi(p));
}
