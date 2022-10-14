/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:53:13 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/13 19:11:42 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		o;
	char	*u;

	u = (char *)s;
	i = 0;
	o = 0;
	while (s[o])
		o++;
	while (i <= o)
	{
		if (s[i] == c)
			return (u + i);
		i++;
	}
	return (0);
}
