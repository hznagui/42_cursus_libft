/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:04:12 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/13 19:11:34 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	int		p;
	char	*o;
	char	*u;

	i = 1;
	p = 0;
	o = (char *)dst;
	u = (char *)src;
	while (i <= len)
	{
		o[len - i] = u[len - i];
		i++;
	}
	return (o);
}

