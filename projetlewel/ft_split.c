/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:11:43 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/23 22:03:40 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_of_words(char *s, char c)
{
	size_t	k;
	size_t	h;
	size_t	l;

	k = 0;
	h = 0;
	l = 0;
	while (s[k])
	{
		if (s[k] != c && h == 0)
		{
			l++;
			h = 1;
		}
		else if (s[k] == c && h == 1)
		{
			h = 0;
		}
		k++;
	}
	return (l);
}

void	free_all(char **str)
{
	int	i;

	i = 0;
	if (!str[i])
	{
		while (str[i] != '\0')
		{
			free (str[i]);
			i++;
		}
		free (str);
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	e;
	size_t	u;
	size_t	a;
	char	**p;

	if (!s)
		return (0);
	u = 0;
	p = malloc((nbr_of_words((char *)s, c) + 1) * (sizeof(char *)));
	if (!p)
		return (0);
	a = 0;
	while (u < nbr_of_words((char *)s, c))
	{
		while (s[a] == c && s[a] != '\0')
			a++;
		e = a;
		while (s[e] != c && s[e] != '\0')
			e++;
		p[u++] = ft_substr((char *)s, a, e - a);
		free_all(p);
		a = e;
	}
	p[u] = NULL;
	return (p);
}
