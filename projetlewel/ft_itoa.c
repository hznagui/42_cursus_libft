/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:58:25 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/27 15:11:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_number(int n, char *i, int p, int j)
{
	i[p] = '\0';
	while (p-- >= 0)
	{
		if (j == 1 && p == 0)
			i[p] = '-';
		else
		{
			i[p] = n % 10 + '0';
			n /= 10;
		}
	}
	return (i);
}

static int	ft_neg(int *n, int *p)
{
	if (*n < 0)
	{
		*p = 1;
		*n *= -1;
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		p;
	int		u;
	int		j;
	char	*i;

	p = 0;
	j = 0;
	u = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_neg(&n, &j);
	if (!u)
		p = 1;
	while (u != 0)
	{
		p++;
		u /= 10;
	}
	i = malloc(p * sizeof(char) + 1 + j);
	if (!i)
		return (0);
	return (ft_number(n, i, p + j, j));
}
