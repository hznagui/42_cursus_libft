/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:27:18 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/26 20:12:13 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *p;
    if (!lst || !new)
		return ;
    else if (*lst == 0)
		*lst = new;
    else 
    {
        p = *lst;
        while (p -> next != '\0')
        {
            p = p -> next; 
        }
        p -> next = new ;
    }
}