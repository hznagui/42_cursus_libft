/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:04:12 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/10 19:23:36 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	int p;
	char *o;
	char *u;
	i = 0;
	p = 0; 
	o =(char *)dst;
	u =(char *)src;
	while (o[i])
	{
		i++;
	}
	while (len < i)
	{
		o[i] = u[i];
		i--;
	}
	return (o);
}
int main()
{
	char y[15]="hello";
	char i[15]="hello";
	//char p[15];
	ft_memmove(y+2,y,5);
	memmove(i+2,i,5);
	printf("%s\n",y);
	printf("%s",i);
}
