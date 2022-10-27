/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:03:20 by hznagui           #+#    #+#             */
/*   Updated: 2022/10/27 15:45:19 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		p = (*lst);
		del((*lst)->content);
		*lst = (*lst)->next;
		free (p);
	}
}
