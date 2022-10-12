/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:08:19 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/10 16:27:25 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*u;

	i = 0;
	u = (char *)b;
	while (i < len)
	{
		u[i] = c;
		i++;
	}
	return (b);
}
