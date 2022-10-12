/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:57:38 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/06 23:10:07 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	u;

	u = 0;
	i = 0;
	while (src[i])
		i++;
	while (u < i && u < dstsize - 1)
	{
		dst[u] = src[u];
		u++;
	}
	dst[u] = '\0';
	return (i);
}
