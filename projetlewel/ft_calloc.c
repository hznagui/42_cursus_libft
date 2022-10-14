/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:39:30 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/14 02:18:46 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    int *a = malloc(count * size);
    if (!a)
        return(0);
    ft_memset(a,0,count * size);
    return(a);
}
