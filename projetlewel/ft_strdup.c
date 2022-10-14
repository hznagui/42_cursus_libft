/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 03:11:22 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/14 04:42:12 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strlen.c"


char *ft_strdup(const char *s1)
{
    size_t i,y;
    y=0;
    i = strlen(s1);
    char *f = malloc(i);
    while (y <= i)
    {
        f[y] = s1[y];
        y++;
    }
    return(f);
}
 
int main()
{
    char source[] = "dela7a zamel";
    
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
    char* target1 = ft_strdup(source);
 
    printf("%s\n", target);
    printf("%s", target1);
    return 0;
}