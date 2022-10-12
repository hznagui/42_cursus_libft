/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:04:12 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/12 18:31:59 by hznagui          ###   ########.fr       */
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
/*int main()
{
	char y[15]="gregjjghjrndjk";
	char i[15]="gregjjghjrndjk";
	//char p[15];
	ft_memmove(y+2,y,5);
	memmove(i+2,i,5);
	printf("%s\n",y);
	printf("%s",i);
}*/
