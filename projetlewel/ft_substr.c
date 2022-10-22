/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:25:58 by marvin            #+#    #+#             */
/*   Updated: 2022/10/16 17:11:59 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	o;
	char	*p;

	if (!s)
		return (0);
	p = malloc(len * sizeof(char) + 1);
	o = 0;
	if (ft_strlen(s) <= (size_t)start)
		return (ft_strdup(""));
	if (!p)
		return (0);
	while (o < len)
	{
		p[o] = s[start + o];
		o++;
	}
	p[o] = '\0';
	return (p);
}
