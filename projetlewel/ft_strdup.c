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


#include "libft.h"


char *ft_strdup(const char *s1)
{
    size_t i,y;
    y=0;
    i = ft_strlen(s1);
    char *f = malloc(i);
    if (!f)
        return(0);
    while (y <= i)
    {
        f[y] = s1[y];
        y++;
    }
    return(f);
}
