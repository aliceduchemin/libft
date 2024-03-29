/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduchemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:09:58 by aduchemi          #+#    #+#             */
/*   Updated: 2019/10/18 16:39:15 by aduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del && lst)
	{
		temp = *lst;
		while (*lst)
		{
			del((*lst)->content);
			free((*lst));
			(*lst) = (*lst)->next;
		}
		temp->next = NULL;
	}
}
