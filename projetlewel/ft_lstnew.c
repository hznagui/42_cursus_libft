/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:01:50 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/25 23:43:06 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *p; 
    p = malloc (sizeof(t_list));
    if(!p)
        return (0);
    p -> next = NULL;
    p -> content = content;
    return(p);
}