/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:29:38 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/15 21:45:33 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t y;
    size_t a;

    a = 0;
    y = 0;
    char *p = malloc(ft_strlen(s1) + ft_strlen(s2));
    if (!p)
        return(0);
    while (y < ft_strlen(s1))
    {
        p[y]=s1[y];
        y++;
    }
    while (a <= ft_strlen(s2))
    {
        p[y+a] =s2[a];
        a++;
    } 
    return(p);
}
int main()
{
    char u[]="za";
    char i[]="mel";
    printf("%s",ft_strjoin(u,i));
}