/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:25:58 by marvin            #+#    #+#             */
/*   Updated: 2022/10/15 18:25:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
//#include "ft_strdup.c"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    
    size_t o;
    o = 0;
    char *p = malloc(len);
    if(ft_strlen(s) < (size_t)start)
     return(0);
    if (!p)
        return (0);
    while (o < len)
    {
        p[o]=s[start + o] ;
        o++;
    }
    p[o]='\0';
    return(p);
}
/*int main()
{
    char l[]="hello nega";
    printf("%s",ft_substr(l,4,9));
}*/
